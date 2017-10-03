/*
	Authors: Ken Rivard and Nick P.
	Date: 10/3/2017
	Class: CS 4900
	Instructor: Dr. Kapenga
*/

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>
#include "quadhead.h"
#include <assert.h>

int main(int argc, char *argv[])
{
	double discriminant;

	struct Input input = getInput(argc, argv);
	discriminant = getDisc(input.a, input.b, input.c);

	if (discriminant > 0)
	{
		double* reals = (double*) malloc(2*sizeof(double));
		reals = twoReal(discriminant, input.a, input.b);
		output(2, reals);
	}
	else if (discriminant == 0)
	{
		double* real = (double*) malloc(sizeof(double));
		double realRoot = oneReal(discriminant, input.a, input.b);
		real = &realRoot;
		output(1, real);
	}
	else
	{
		double* imag = (double*) malloc(4*sizeof(double));
		imag = noReals(discriminant, input.a, input.b);
		output(0, imag);
	}
	return 0;
}
