/*
 * spiel.c
 *
 *  Created on: 02.09.2013
 *      Author: Malcolm
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int a8(void) {
	int versuche;

	const int x = 0, y = 10;
	int random;

	srand(time(NULL));
	random = (rand() % ((y + 1) - x)) + x;
	printf("Zufallszahl gewaehlt! Bitte raten: %i \n", random);

	for (versuche = 0; versuche < 3; ++versuche) {
		int temp;
		scanf("%d", &temp);
		if (temp == random) {
			printf("Zahl erraten!\n");
			break;
		} else if (temp < random) {
			printf("Zahl groesser!\n");
			if (versuche == 2) {
				printf("Zahl: %i\n", random);
			}

		} else {
			printf("Zahl kleiner!\n");
			if (versuche == 2) {
				printf("Zahl: %i\n", random);
			}

		}

	}


	return EXIT_SUCCESS;
}
