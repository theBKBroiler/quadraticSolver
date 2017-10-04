#include <stdio.h>
#include <getopt.h>
#include <unistd.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include "../../quadhead.h"

int main(int argc, char * argv[])
{
	
	//printf("%lf", atof(argv[1]));

	assert(argc == 5);


	int a = atof(argv[1]);
	int b = atof(argv[2]);
	int c = atof(argv[3]);	

	double det = (b*b) - (4*a*c); //getDisc(atof(argv[1]), atof(argv[2]), atof(argv[3]));
	assert(det == det);

	//printf("\n%lf and %lf\n", atof(argv[4]), det);

	assert(atof(argv[4]) == det);

	return 0;
}
