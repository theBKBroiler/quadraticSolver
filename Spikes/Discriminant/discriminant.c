#include <stdio.h>
#include <getopt.h>
#include <unistd.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include "../../quadhead.h"

int Main(int argc, char * argv[])
{
	assert(argc == 4);
	double desc = getDisc(atof(argv[1]), atof(argv[2]), atof(argv[3]));
	assert(det == det);

	return 0;
}