// src/todo_list.c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "modules.h"

typedef struct Task {
    char description[100];
    struct Task *next;
} Task;

void add_task(Task **head) {
    Task *new = malloc(sizeof(Task));
    if (!new) {
        printf("Memory error!\n");
        return;
    }
    printf("Enter task description: ");
    getchar();                   // consume leftover '\n'
    fgets(new->description, 100, stdin);
    new->description[strcspn(new->description, "\n")] = '\0';
    new->next = NULL;

    if (*head == NULL) {
        *head = new;
    } else {
        Task *cur = *head;
        while (cur->next) cur = cur->next;
        cur->next = new;
    }
    printf("Task added.\n");
}

void view_tasks(Task *head) {
    if (!head) {
        printf("No tasks.\n");
        return;
    }
    int idx = 1;
    Task *cur = head;
    while (cur) {
        printf("%d. %s\n", idx++, cur->description);
        cur = cur->next;
    }
}

void delete_task(Task **head) {
    if (!*head) {
        printf("No tasks to delete.\n");
        return;
    }
    int idx;
    view_tasks(*head);
    printf("Enter task number to delete: ");
    if (scanf("%d", &idx) != 1 || idx < 1) {
        while (getchar()!='\n');
        printf("Invalid number.\n");
        return;
    }

    Task *cur = *head, *prev = NULL;
    int count = 1;
    while (cur && count < idx) {
        prev = cur;
        cur = cur->next;
        count++;
    }
    if (!cur) {
        printf("No such task.\n");
        return;
    }
    if (prev) prev->next = cur->next;
    else      *head    = cur->next;
    free(cur);
    printf("Task deleted.\n");
}

void free_all(Task *head) {
    while (head) {
        Task *tmp = head;
        head = head->next;
        free(tmp);
    }
}

void run_todo_list(void) {
    Task *head = NULL;
    int choice;

    do {
        printf("\n--- To-Do List Manager ---\n");
        printf("1) Add Task\n");
        printf("2) View Tasks\n");
        printf("3) Delete Task\n");
        printf("4) Return to Main Menu\n");
        printf("Select an option: ");
        if (scanf("%d", &choice) != 1) {
            while (getchar()!='\n');
            printf("Invalid input.\n");
            continue;
        }

        switch (choice) {
            case 1: add_task(&head);    break;
            case 2: view_tasks(head);   break;
            case 3: delete_task(&head); break;
            case 4: break;
            default: printf("Choose 1–4.\n");
        }
    } while (choice != 4);

    free_all(head);
}
