# Makefile for c-master-toolkit
# CC: the C compiler to use (gcc)
# CFLAGS: compiler flags (-I to include headers, -Wall/-Wextra for warnings, -g for debugging symbols)

CC = gcc
CFLAGS = -I include -Wall -Wextra -g

# SRC: all source files
SRC = src/main.c \
      src/calculator.c \
      src/guessing_game.c \
      src/todo_list.c \
      src/student_manager.c \
      src/utils.c \
      src/dp_demo.c

# OBJ: object files generated from SRC (replace .c with .o)
OBJ = $(SRC:.c=.o)

# TARGET: the final executable
TARGET = c-master-toolkit

# Default rule: build the TARGET
all: $(TARGET)

# Link object files into the executable
# $^ expands to all prerequisites (object files)
# $@ expands to the target name
$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

# Compile .c files into .o files
# $< expands to the first prerequisite (source file)
# -c tells gcc to compile only
# -o specifies output file
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Clean up generated files
# "clean" target removes object files and the executable
.PHONY: clean
clean:
	rm -f src/*.o $(TARGET)
