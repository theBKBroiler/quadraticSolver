# quadraticSolver
This is a quadratic equation solver that solves functions in accordance with IEEE floating point standards

discriminant.c - Takes the inputs of a, b, and c and returns the discriminant
input.c - Reads the input from the commandline and sets the internal variables
mock.c - Is a mock test to assert the setting of variables
noReals.c - If the return of the equation has no real numbers the output value is calculated here
oneReal.c - If the return has one real number the output is calculated here
twoReal.c -  If the return has two real numbers the output is calculated here
output.c - This takes the calculated values and prints the output
quadSolver.c - This is the main of the software

quadSolver.o - The object file for the software

Makefile
	all - This will compile the project into the object file quadSolver.o
	test - This will run the software showing the expected results 