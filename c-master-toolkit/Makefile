CC = gcc
CFLAGS = -I include -Wall -Wextra -g

SRC = src/main.c \
      src/calculator.c \
      src/guessing_game.c \
      src/todo_list.c \
      src/student_manager.c \
      src/utils.c \
      src/dp_demo.c

OBJ = $(SRC:.c=.o)
TARGET = c-master-toolkit

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f src/*.o $(TARGET)
