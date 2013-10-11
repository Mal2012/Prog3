/*
 * ausgabe.c
 *
 *  Created on: 02.09.2013
 *      Author: Malcolm
 */
#include <stdio.h>
#define EXIT_SUCCESS 0
int a6(void) {
	printf("Kommentare werden in C mit /*..*/ geklammert.\n");
	printf("Beachte jedoch:");
	printf("\n - Kommentare innerhalb von Anfuehrungszeichen\n");
	printf(" werden als Text und nicht als Kommentar interpretiert\n");
	/* printf("Ende\n"); */
	return EXIT_SUCCESS;
}

