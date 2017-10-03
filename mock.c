#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>
#include "quadhead.h"
#include <assert.h>

double mockA, mockB, mockC, mockDisc;

struct Input getInput(int argc, char* argv[])
{
	struct Input *in = malloc(sizeof(struct Input));
	mockA = 1;
	mockB = 2;
	mockC = 3;
	mockDisc = 4;

	in->a = mockA;
	in->b = mockB;
	in->c = mockC;
	return *in;
}

double getDisc(double a, double b, double c)
{
	assert(a == mockA);
	assert(b == mockB);
	assert(c == mockC);
	return mockDisc;
}

double* twoReal(double discriminant, double a, double b)
{
	assert(a == mockA);
	assert(b == mockB);
	assert(discriminant == mockDisc);

	double *mockReal = malloc(2*sizeof(double));
	mockReal[0] = 0;
	mockReal[1] = 1;
	return mockReal;
}

double oneReal(double discriminant, double a, double b)
{
	assert(a == mockA);
	assert(b == mockB);	
	assert(discriminant == mockDisc);
	return 1;
}

double* noReals(double discriminant, double a, double b)
{
	assert(a == mockA);
	assert(b == mockB);
	assert(discriminant == mockDisc);
	double *mockReal = malloc(2*sizeof(double));
	mockReal[0] = 0;
	mockReal[1] = 1;
	return mockReal;
}

int output(int numOfRoots, double* roots)
{
	assert(numOfRoots == 2);
	assert(roots != NULL);
	assert(roots[0] == 0);
	assert(roots[1] == 1);
	return(0);
}
































