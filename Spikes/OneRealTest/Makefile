CC=gcc
CFLAGS=-std=c99 -Wall -o
testfile=oneReal
testmain=oneRealTest

all:
	$(CC) $(CFLAGS) $(testfile).o $(testmain).c ../../$(testfile).c

test:
	-./$(testfile).o
	-./$(testfile).o -1 0 4
	-./$(testfile).o 0 0 4
	-./$(testfile).o 0 3 5
