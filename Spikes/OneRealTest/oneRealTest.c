#include <stdio.h>
#include <getopt.h>
#include <unistd.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include "../../quadhead.h"
#include <float.h>

int main(int argc, char *argv[])
{
	assert(argc == 4);
	double real = oneReal(atof(argv[1]), atof(argv[2]), atof(argv[3]));
	assert(real != DBL_MIN);
}
