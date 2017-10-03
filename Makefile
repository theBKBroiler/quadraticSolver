CC=gcc
#CFLAGS=-std=c99 -Wall -o -lm
CFLAGS=-std=c99 -o
mainfile=quadSolver
noReal=noReals
one=oneReal
two=twoReal
in=input
out=output
disc=discriminant

all:
	$(CC) $(CFLAGS) $(mainfile).o $(mainfile).c $(disc).c $(noReal).c $(one).c $(two).c $(in).c $(out).c -lm

test:
	@echo "Output should be 'Single root is: -1.00'"
	./$(mainfile).o -a 1 -b 2 -c 1
	@echo "\nOutput should be 'Roots are: -0.80+1.41i and -0.80-1.41i'"
	./$(mainfile).o -a 4.2 -b 6.7 -c 11
	@echo "\nOutput should be 'Roots are: .99 and -3.79'"
	./$(mainfile).o -a 1.55 -b 4.345 -c -5.8
