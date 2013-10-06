/*
 * chars.c
 *
 *  Created on: 02.09.2013
 *      Author: Malcolm
 */
#include <stdio.h>

int a4(void) {
	char c = 'x';

	printf("char-Konst.: %d Bytes, char-Var: %d, int: %d Bytes\n", sizeof('x'),
			sizeof(c), sizeof(10));
	printf("Inhalt der char-Var.: %c, int-Konstante: %i\n", c, 10);
	return 0;
}

