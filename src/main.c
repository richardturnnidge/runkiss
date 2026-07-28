/*
 * Title:			runAlpha
 * Author:			Richard Turnnidge
 * for running alphaMinus scripts
 */
 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <agon/vdp.h>
#include <agon/mos.h>
#include <agon/timer.h>
#include "runtime.h"


int main(int argc, char * argv[])
{
	FILE *thefile = argv[1];
		runcode(thefile);
	return 0;
} 