#include <stdio.h>
#include "modules.h"

int main(void) {
    int choice;
    do {
        printf("\n=== C Master Toolkit ===\n"
               "1. Calculator\n"
               "2. Number Guessing Game\n"
               "3. To-Do List Manager\n"
               "4. Student Record Manager\n"
               "5. Array & String Utils Demo\n"
               "6. Dynamic Programming Demo\n"
               "7. Exit\n"
               "Select an option: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: run_calculator();      break;
            case 2: run_guessing_game();   break;
            case 3: run_todo_list();       break;
            case 4: run_student_manager(); break;
            case 5: run_utils_demo();      break;
            case 6: run_dp_demo();         break;
            case 7: printf("Goodbye!\n");  break;
            default: printf("Invalid choice\n");
        }
    } while (choice != 7);

    return 0;
}
