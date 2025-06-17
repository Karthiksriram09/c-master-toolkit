// src/guessing_game.c
#include <stdio.h>
#include <stdlib.h>   // for rand(), srand()
#include <time.h>     // for time()
#include "modules.h"

void run_guessing_game(void) {
    int target, guess, attempts;
    char choice;

    // Seed RNG once
    srand((unsigned)time(NULL));

    do {
        target   = rand() % 100 + 1;  // pick 1–100
        attempts = 0;
        printf("\n=== Number Guessing Game ===\n");
        printf("I have chosen a number between 1 and 100.\n");
        printf("Can you guess it?\n");

        // loop until correct
        do {
            printf("Enter your guess: ");
            if (scanf("%d", &guess) != 1) {
                // clear bad input
                while (getchar() != '\n');
                printf("Please enter a valid integer.\n");
                continue;
            }
            attempts++;
            if (guess < target) {
                printf("Too low! 🔻\n");
            } else if (guess > target) {
                printf("Too high! 🔺\n");
            }
        } while (guess != target);

        printf("🎉 Correct! You found it in %d attempts.\n", attempts);

        // play again?
        printf("Play again? (y/n): ");
        while (getchar() != '\n'); // clear newline
        choice = getchar();
    } while (choice=='y' || choice=='Y');
}
