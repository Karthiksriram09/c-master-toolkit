// src/calculator.c
#include <stdio.h>
#include "modules.h"

void run_calculator(void) {
    int choice;
    double a, b;

    while (1) {
        printf("\n--- Calculator ---\n");
        printf("1) Add\n");
        printf("2) Subtract\n");
        printf("3) Multiply\n");
        printf("4) Divide\n");
        printf("5) Return to Main Menu\n");
        printf("Select operation: ");
        if (scanf("%d", &choice) != 1) {
            // clear invalid input
            while (getchar() != '\n');
            printf("Invalid input. Please enter a number 1–5.\n");
            continue;
        }

        if (choice == 5) {
            // go back to main menu
            break;
        }

        printf("Enter two numbers: ");
        if (scanf("%lf %lf", &a, &b) != 2) {
            while (getchar() != '\n');
            printf("Invalid numbers. Try again.\n");
            continue;
        }

        switch (choice) {
            case 1:
                printf("Result: %.2f + %.2f = %.2f\n", a, b, a + b);
                break;
            case 2:
                printf("Result: %.2f - %.2f = %.2f\n", a, b, a - b);
                break;
            case 3:
                printf("Result: %.2f * %.2f = %.2f\n", a, b, a * b);
                break;
            case 4:
                if (b == 0) {
                    printf("Error: Division by zero is undefined.\n");
                } else {
                    printf("Result: %.2f / %.2f = %.2f\n", a, b, a / b);
                }
                break;
            default:
                printf("Invalid choice. Please select 1–5.\n");
        }
    }
}
