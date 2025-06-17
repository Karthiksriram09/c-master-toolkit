# C Master Toolkit

![C Master Toolkit](https://img.shields.io/badge/C%20Master-Toolkit-blue?logo=c)

A comprehensive **command-line interface (CLI)** application that demonstrates core C programming concepts—from basic I/O and control flow to data structures, file handling, and dynamic programming. Perfect for learners who want a hands-on, modular toolkit to explore and showcase their C skills.

---

## 📋 Table of Contents

1. [Overview](#overview)
2. [Features](#features)
3. [Prerequisites](#prerequisites)
4. [Installation & Build](#installation--build)
5. [Usage Examples](#usage-examples)

   * [Launching the Toolkit](#launching-the-toolkit)
   * [1. Calculator](#1-calculator)
   * [2. Number Guessing Game](#2-number-guessing-game)
   * [3. To-Do List Manager](#3-to-do-list-manager)
   * [4. Student Record Manager](#4-student-record-manager)
   * [5. Array & String Utils Demo](#5-array--string-utils-demo)
   * [6. Dynamic Programming Demo](#6-dynamic-programming-demo)
6. [Project Structure](#project-structure)
7. [Contributing](#contributing)
8. [License](#license)
9. [Contact](#contact)

---

## 🌟 Overview

`c-master-toolkit` is a unified CLI application that encapsulates six mini-projects, each targeting a fundamental C topic:

* **Calculator**: Basic arithmetic operations with input validation.
* **Number Guessing Game**: Randomized game loop using `rand()` and `time()`.
* **To-Do List Manager**: Dynamic linked list manipulation with `malloc`/`free`.
* **Student Record Manager**: Binary file I/O for persisting structured data.
* **Array & String Utilities**: Functions for reversing strings, finding min/max, and bubble sort.
* **Dynamic Programming Demo**: Recursive vs. memoized Fibonacci to illustrate DP benefits.

By selecting an option from the main menu, you can dive into each module, run its logic, and then return seamlessly to the main menu.

---

## 🚀 Features

* **Modular Design**: Each feature lives in its own source file (`src/*.c`), wired together via a central dispatcher in `main.c`.
* **Clear Menus & Prompts**: User-friendly text UI with input validation and error handling.
* **Lightweight**: Pure C (C99), no external dependencies beyond the standard library.
* **Educational**: Well-commented code and demonstration of best practices.

---

## 🛠️ Prerequisites

* **GCC** compiler (supports C99) or compatible
* **Make** (optional, but recommended for easy builds)
* Basic familiarity with command-line operations

---

## ⚙️ Installation & Build

1. **Clone the repository** (or download the ZIP and extract):

   ```bash
   git clone https://github.com/<your-username>/c-master-toolkit.git
   cd c-master-toolkit
   ```

2. **Build with Make** (recommended):

   ```bash
   make
   ```

3. **Or compile directly with GCC**:

   ```bash
   gcc -std=c99 -I include src/*.c -o c-master-toolkit
   ```

4. **Run the executable**:

   ```bash
   ./c-master-toolkit    # Unix/macOS
   c-master-toolkit.exe  # Windows
   ```

---

## 📖 Usage Examples

### Launching the Toolkit

```bash
$ ./c-master-toolkit
=== C Master Toolkit ===
1. Calculator
2. Number Guessing Game
3. To-Do List Manager
4. Student Record Manager
5. Array & String Utils Demo
6. Dynamic Programming Demo
7. Exit
Select an option:
```

### 1. Calculator

```
Select an option: 1

--- Calculator ---
1) Add
2) Subtract
3) Multiply
4) Divide
5) Return to Main Menu
Select operation: 1
Enter two numbers: 12.5 3.4
Result: 12.50 + 3.40 = 15.90
Select operation: 5
```

### 2. Number Guessing Game

```
Select an option: 2

=== Number Guessing Game ===
I have chosen a number between 1 and 100.
Can you guess it?
Enter your guess: 50
Too low! 🔻
Enter your guess: 75
Too high! 🔺
Enter your guess: 63
🎉 Correct! You found it in 3 attempts.
Play again? (y/n): n
```

### 3. To-Do List Manager

```
Select an option: 3

--- To-Do List Manager ---
1) Add Task
2) View Tasks
3) Delete Task
4) Return to Main Menu
Select an option: 1
Enter task description: Finish C tutorial
Task added.
Select an option: 2
1. Finish C tutorial
Select an option: 4
```

### 4. Student Record Manager

```
Select an option: 4

--- Student Record Manager ---
1) Add Student
2) View All Students
3) Search Student by ID
4) Return to Main Menu
Select an option: 1
Enter student ID: 101
Enter name: Alice
Enter CGPA: 9.2
Student added.
Select an option: 2
ID: 101 | Name: Alice | CGPA: 9.20
Select an option: 4
```

### 5. Array & String Utils Demo

```
Select an option: 5

--- Utils Demo ---
1) Reverse a String
2) Find Min & Max in Array
3) Sort Array (Bubble Sort)
4) Return to Main Menu
Select an option: 1
Enter a string: hello
Reversed: olleh
Select an option: 4
```

### 6. Dynamic Programming Demo

```
Select an option: 6

--- DP Demo: Fibonacci ---
Compute Fibonacci of n for both recursive and DP methods.
Enter n (>=0 and <=40 recommended): 10
Recursive result: 55 (function calls: 177)
DP result:       55
```

---

## 📁 Project Structure

```
c-master-toolkit/
├── include/           # Header files
│   └── modules.h      # Function prototypes
├── src/               # Module implementations
│   ├── main.c         # Menu dispatcher
│   ├── calculator.c   # Calculator module
│   ├── guessing_game.c# Number guessing game
│   ├── todo_list.c    # To-do list manager
│   ├── student_manager.c # Student record manager
│   ├── utils.c        # Array & string utilities
│   └── dp_demo.c      # Dynamic programming demo
├── Makefile           # Build rules
└── README.md          # This document
```

---

## 🤝 Contributing

Contributions, issues, and feature requests are welcome! Feel free to fork the repo and submit a pull request. Please ensure your code follows **C99** standards and is well-documented.

---

## 📄 License

This project is licensed under the [MIT License](LICENSE).

---

## 📬 Contact

Created by **KARTHIK_❣️**. For questions or suggestions, open an issue or reach out via email: `karthiksriram009@gmail.com`.
