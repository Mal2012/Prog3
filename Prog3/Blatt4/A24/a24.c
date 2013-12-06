/*
 * a24.c
 *
 *  Created on: 05.11.2013
 *      Author: Malcolm
 */
#include "stdio.h"

int a24(){

		char text[255];
		char pattern;

		printf("Bitte Text eingeben: \n");
		fgets(text, sizeof(text), stdin);

		printf("\nBitte Buchstaben eingeben: \n");

		scanf("%c", &pattern);

        int count = 0;
        int i=0;
        for(;text[i] != '\0';i++){
                if(text[i] == pattern){
                        count++;
                }
        }

        printf("\n Anzahl: %i \n", count);
        return 0;
}
