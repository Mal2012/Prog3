/*
 * typesize.c
 *
 *  Created on: 02.09.2013
 *      Author: Malcolm
 */
#include <stdio.h>
#define EXIT_SUCCESS 0
int a1(void) {
	printf("short int: %d\n", sizeof(short int));
	printf("int: %d\n", sizeof(int));
	printf("long int: %d\n", sizeof(long int));
	printf("long long: %d\n", sizeof(long long));
	printf("float: %d\n", sizeof(float));
	printf("double: %d\n", sizeof(double));
	printf("long double: %d\n", sizeof(long double));

	//system("pause");
	return EXIT_SUCCESS;
}

