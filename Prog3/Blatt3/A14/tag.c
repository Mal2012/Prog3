/*
 * tag.c
 *
 *  Created on: 11.10.2013
 *      Author: Malcolm
 */
#include <stdio.h>
#define EXIT_SUCCESS 0
int checkSchaltjahr(int i);
int berechneTag1(int d, int m, int y);
int a14(void){
	int tag, monat, jahr;
	printf("Bitte Tag eingeben: \n");
	scanf("%i", &tag);
	if(tag>31){
		printf("Kein Gueltiger Tag (>31)");
		return 0;
	}
	printf("\nBitte Monat eingeben: \n");
	scanf("%i", &monat);
	if(monat>12){
		printf("Kein Gueltiger Monat (>12)");
		return 0;
	}
	printf("\nBitte Jahr eingeben: \n");
	scanf("%i", &jahr);

	printf("\nBenutzereingaben: \nTAG: %i MONAT: %i JAHR: %i \n", tag,monat,jahr);

	printf("\nSchaltjahr: %i\n", checkSchaltjahr(jahr));
	printf("\nTag im Jahr: %i\n", berechneTag1(tag,monat,jahr));

	return EXIT_SUCCESS;
}

int checkSchaltjahr(int i){
	if((((i%4)==0&&(i%100)!=0)||((i%4)!=0&&(i%100)==0))||(i%400)==0){
		return 1;
	}else{
		return 0;
	}
}

int berechneTag1(int d, int m, int y){
	int monate[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int tage_berechnet =0;
	int i;
	for(i=0; i<m; i++){
		tage_berechnet+=monate[i];
		}
	return tage_berechnet+d+checkSchaltjahr(y);

}
