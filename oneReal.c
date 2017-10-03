#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "quadhead.h"
#include <float.h>
#include <assert.h>

double oneReal(double discriminant, double a, double b)
{
	assert(discriminant == 0);
	assert(a != 0);

	double ret;
	ret = -b/(2*a);
	return ret;
}
