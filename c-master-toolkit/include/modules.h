// modules.h
// Header file declaring the interfaces for each utility module
// Provides prototypes for functions that run the individual mini-programs

#ifndef MODULES_H    // Include guard start: prevents multiple inclusion
#define MODULES_H

/**
 * @brief Launches the interactive calculator module.
 *        Supports basic arithmetic operations: add, subtract,
 *        multiply, and divide, with a simple text menu.
 */
void run_calculator(void);

/**
 * @brief Starts the number guessing game.
 *        The user attempts to guess a randomly generated number
 *        within a fixed range and limited attempts.
 */
void run_guessing_game(void);

/**
 * @brief Runs the to-do list manager.
 *        Allows adding, removing, and viewing tasks
 *        stored in memory or a simple file.
 */
void run_todo_list(void);

/**
 * @brief Launches the student manager module.
 *        Supports CRUD operations on student records:
 *        add, delete, list, and search by ID or name.
 */
void run_student_manager(void);

/**
 * @brief Demonstrates various utility functions:
 *        min/max finding, sorting algorithms, and other helpers.
 */
void run_utils_demo(void);

/**
 * @brief Runs the dynamic programming demonstration.
 *        Showcases classic DP problems (e.g., knapsack,
 *        Fibonacci) and their computed results.
 */
void run_dp_demo(void);

#endif // MODULES_H     // Include guard end
