// src/utils.c
#include <stdio.h>
#include <string.h>
#include "modules.h"

// reverse a string in place
void reverse_string(char *s) {
    int i = 0, j = strlen(s) - 1;
    while (i < j) {
        char tmp = s[i];
        s[i++] = s[j];
        s[j--] = tmp;
    }
}

// find max and min in an int array
void find_min_max(int arr[], int n, int *min, int *max) {
    *min = *max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < *min) *min = arr[i];
        if (arr[i] > *max) *max = arr[i];
    }
}

// simple bubble sort
void bubble_sort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-1-i; j++) {
            if (arr[j] > arr[j+1]) {
                int tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
        }
    }
}

void run_utils_demo(void) {
    int choice;
    do {
        printf("\n--- Utils Demo ---\n");
        printf("1) Reverse a String\n");
        printf("2) Find Min & Max in Array\n");
        printf("3) Sort Array (Bubble Sort)\n");
        printf("4) Return to Main Menu\n");
        printf("Select an option: ");
        if (scanf("%d", &choice) != 1) {
            while(getchar()!='\n');
            printf("Invalid input.\n");
            continue;
        }

        if (choice == 4) break;

        if (choice == 1) {
            char s[100];
            printf("Enter a string: ");
            getchar();
            fgets(s, 100, stdin);
            s[strcspn(s, "\n")] = '\0';
            reverse_string(s);
            printf("Reversed: %s\n", s);

        } else if (choice == 2) {
            int n;
            printf("How many elements? ");
            if (scanf("%d", &n) != 1 || n < 1) {
                while(getchar()!='\n');
                printf("Invalid size.\n");
                continue;
            }
            int arr[n];
            for (int i = 0; i < n; i++) {
                printf("arr[%d]: ", i);
                scanf("%d", &arr[i]);
            }
            int mn, mx;
            find_min_max(arr, n, &mn, &mx);
            printf("Min = %d, Max = %d\n", mn, mx);

        } else if (choice == 3) {
            int n;
            printf("How many elements? ");
            if (scanf("%d", &n) != 1 || n < 1) {
                while(getchar()!='\n');
                printf("Invalid size.\n");
                continue;
            }
            int arr[n];
            for (int i = 0; i < n; i++) {
                printf("arr[%d]: ", i);
                scanf("%d", &arr[i]);
            }
            bubble_sort(arr, n);
            printf("Sorted: ");
            for (int i = 0; i < n; i++) printf("%d ", arr[i]);
            printf("\n");

        } else {
            printf("Choose 1–4.\n");
        }
    } while (choice != 4);
}
