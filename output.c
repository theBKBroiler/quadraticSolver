#include <stdio.h>
#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <quadhead.h>

int output(int numOfRoots, double* roots)
{
	assert(numOfRoots >= 0);
	assert(numOfRoots < 3);
	assert(roots != NULL);
	
	if (numOfRoots == 1)
	{
		printf("Single Root is: %.2lf\n", roots[0]);
	}
	else if (numOfRoots == 2)
	{
		printf("Roots are: %.2lf and %.2lf\n", roots[0], roots[1]);
	}
	else
	{
		printf("Roots are: %.2lf+%2lfi and %.2lf-%.2lfi\n", roots[0], roots[1], roots[0], roots[1]);
	}
	return(0);
}
