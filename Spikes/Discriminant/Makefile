CC=gcc
CFLAGS=-std=c99 -Wall -o
testfile=discriminant
testmain=discriminant

all:
	$(CC) $(CFLAGS) $(testfile).o $(testmain).c ../../$(testfile).c

test:
	-./$(testfile).o 2 4 6
	-./$(testfile).o
