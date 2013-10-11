/*
 * menu.c
 *
 *  Created on: 02.09.2013
 *      Author: Malcolm
 */
#include <stdio.h>
#define EXIT_SUCCESS 0
int a5(int argc, char **argv) {
	printf("\t %s\n", "Hauptmenue");
	printf("\t %s\n\n", "==========");
	printf("%s\n", "(A)endern");
	printf("%s\n", "(B)eenden");
	printf("%s\n", "(D)rucken");
	printf("%s\n", "(E)ingeben");
	printf("%s\n\n", "(L)oeschen");
	printf("%s\n", "Was wuenschen Sie zu tun ?");
	char zeichen;
	scanf("%c", &zeichen);
	printf("%c", zeichen);
	return EXIT_SUCCESS;
}

