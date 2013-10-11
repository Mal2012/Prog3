/*
 * zeichen.c

 *
 *  Created on: 02.09.2013
 *      Author: Malcolm
 */
#include <stdio.h>
#define EXIT_SUCCESS 0
int a3(int argc, char **argv) {
	int var;
	int max = 99;
	for (var = 65; var < max; ++var) {
		printf("Zeichen %d: %c\n", var, var);
	}

	return EXIT_SUCCESS;
}

