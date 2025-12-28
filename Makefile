CC = gcc
CFLAGS = -Wall -Wextra -std=c11 -Iinclude

SRC = src/main.c src/ui.c src/logic.c src/storage.c src/models.c
OUT = employee_manager

all: 
	$(CC)	$(CFLAGS)	$(SRC) -o	$(OUT)

clean:
	rm -f	$(OUT)