/*
 * Title:			runAlpha
 * Author:			Richard Turnnidge
 * for running alphaMinus scripts
 */
 
#include <stdio.h>


int main(int argc, char * argv[])
{
	FILE *thefile = argv[1];
		runcode(thefile);
	return 0;
} 