/*
 * temp.c
 *
 *  Created on: 02.09.2013
 *      Author: Malcolm
 */
#include <stdio.h>

int a10(int argc, char **argv) {
	char zeichen;
	float temp;
	while (1 == 1) {
		system("cls");
		printf("\t %s\n", "Hauptmenue");
		printf("\t %s\n\n", "==========");
		printf("%s\n", "(C)elsius -> Fahrenheit");
		printf("%s\n", "(F)ahrenheit -> Celsius");
		printf("%s\n", "(B)eenden");

		printf("%s\n", "Was wuenschen Sie zu tun ? Eingabe: ");
		scanf("%c", &zeichen);

		if (zeichen == 'C'|| zeichen == 'c') {
			printf("\n Temperatur in Celsius: ");
			scanf("%f", &temp);
			temp = ((9 * temp) / 5) + 32;
			printf("\nFahrenheit: %.2f\n", temp);
			system("pause");

		}
		if (zeichen == 'B'|| zeichen=='b') {
			break;
		}
		if (zeichen == 'F'|| zeichen == 'f') {
			printf("\n Temperatur in Fahrenheit: ");
			scanf("%f", &temp);
			temp = (temp - 32) * 5 / 9;
			printf("\nCelsius: %.2f\n", temp);
			system("pause");

		}
	}

	return 0;
}



