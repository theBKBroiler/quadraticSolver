CC=gcc
CFLAGS=-std=c99 -Wall -o
testfile=discriminant

all:
	$(CC) $(CFLAGS) $(testfile).o $(testfile).c 
test:
	-./$(testfile).o 2 4 6 -32
	
