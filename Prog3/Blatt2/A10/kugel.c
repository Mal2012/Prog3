/*
 * kugel.c
 *
 *  Created on: 10.10.2013
 *      Author: Malcolm
 */

/*
 * Schreiben Sie ein C-Programm, das den Radius einer Kugel im Dialog einliest und die Oberfläche sowie das Volumen der Kugel ausgibt. Zur Darstellung der Zahl PI = 3,1415927 sowie zur Berechnung der zweiten und dritten Potenz einer Zahl definieren Sie Konstanten und Makros mit Hilfe von Präprozessoranweisungen.
 */
#include <stdio.h>
#include <stdlib.h>

#define PI 3.1415927
#define SQUARE(x) x*x
#define TRIFORCE(x) x*x*x

int kugel(int argc, char **argv) {
	printf("Bitte Radius Eingeben: \n");
	float r = 0;
	scanf("%f", &r);

	printf("\nOberflaeche: %f", 4 * PI * SQUARE(r));
	printf("\nVolumen: %f\n", 4.0/3.0 * PI * TRIFORCE(r));





return EXIT_SUCCESS;
}






