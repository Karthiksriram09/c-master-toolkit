// src/student_manager.c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "modules.h"

typedef struct {
    int id;
    char name[50];
    float cgpa;
} Student;

const char *DB_FILE = "students.dat";

void add_student(void) {
    Student s;
    printf("Enter student ID: ");
    if (scanf("%d", &s.id) != 1) {
        while (getchar()!='\n');
        printf("Invalid ID.\n");
        return;
    }
    printf("Enter name: ");
    getchar();
    fgets(s.name, 50, stdin);
    s.name[strcspn(s.name, "\n")] = '\0';
    printf("Enter CGPA: ");
    if (scanf("%f", &s.cgpa) != 1) {
        while (getchar()!='\n');
        printf("Invalid CGPA.\n");
        return;
    }

    FILE *fp = fopen(DB_FILE, "ab");
    if (!fp) {
        printf("Unable to open file.\n");
        return;
    }
    fwrite(&s, sizeof(Student), 1, fp);
    fclose(fp);
    printf("Student added.\n");
}

void view_students(void) {
    Student s;
    FILE *fp = fopen(DB_FILE, "rb");
    if (!fp) {
        printf("No records found.\n");
        return;
    }
    printf("\n--- All Students ---\n");
    while (fread(&s, sizeof(Student), 1, fp) == 1) {
        printf("ID: %d | Name: %s | CGPA: %.2f\n", s.id, s.name, s.cgpa);
    }
    fclose(fp);
}

void search_student(void) {
    int search_id;
    Student s;
    printf("Enter student ID to search: ");
    if (scanf("%d", &search_id) != 1) {
        while (getchar()!='\n');
        printf("Invalid ID.\n");
        return;
    }

    FILE *fp = fopen(DB_FILE, "rb");
    if (!fp) {
        printf("No records file.\n");
        return;
    }
    while (fread(&s, sizeof(Student), 1, fp) == 1) {
        if (s.id == search_id) {
            printf("Found: ID: %d | Name: %s | CGPA: %.2f\n",
                   s.id, s.name, s.cgpa);
            fclose(fp);
            return;
        }
    }
    fclose(fp);
    printf("Student with ID %d not found.\n", search_id);
}

void run_student_manager(void) {
    int choice;
    do {
        printf("\n--- Student Record Manager ---\n");
        printf("1) Add Student\n");
        printf("2) View All Students\n");
        printf("3) Search Student by ID\n");
        printf("4) Return to Main Menu\n");
        printf("Select an option: ");
        if (scanf("%d", &choice) != 1) {
            while (getchar()!='\n');
            printf("Invalid input.\n");
            continue;
        }
        switch (choice) {
            case 1: add_student();    break;
            case 2: view_students();  break;
            case 3: search_student(); break;
            case 4: break;
            default: printf("Choose 1–4.\n");
        }
    } while (choice != 4);
}
