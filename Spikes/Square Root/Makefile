CC=gcc
CFLAGS=-std=c99 -Wall -o
file=sqrt

all:
	$(CC) $(CFLAGS) $(file).o $(file).c -lm
	echo "You can use make testsqrt to run automated tests"

testsqrt:
	./$(file).o 4.0 2
	./$(file).o 16.0 4.0
	./$(file).o 64 8
	./$(file).o nan nan
	./$(file).o inf inf
