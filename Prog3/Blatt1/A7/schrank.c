/*
 * schrank.c
 *
 *  Created on: 02.09.2013
 *      Author: Malcolm
 */
#include <stdio.h>
int a9() {
	char inseln[][10] = { "Bermudas", "Fidshi", "Komoren", "Kuba" };

	int y = 0;
	int ref = 0;
	int index[] = { 1, 3, 0, 2 };
	while (y < 4) {

		ref = index[y];
		printf("Insel: ");
		printf("%s\n", inseln[ref]);
		y = y + 1;
	}

	system("pause");
	return 0;
}

