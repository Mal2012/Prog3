/*
 * median.c
 *
 *  Created on: 12.10.2013
 *      Author: Malcolm
 */
#include <stdio.h>
#define SWAP(wert1, wert2, typ) { typ tmp = wert1; wert1 = wert2; wert2 = tmp; }
int berechneMedian(int *zahlen);
int *bubbleSort(int *zahlen);

int *bubbleSort(int *zahlen){
	int i, j;
	for(i = 5; i > 1; i--){
		for(j = 0; j < i - 1; j++){
			if(zahlen[j] > zahlen[j + 1]){
				SWAP(zahlen[j], zahlen[j + 1], int);
			}
		}
	}
	return (zahlen);
}

int berechneMedian(int *zahlen){

	bubbleSort(zahlen);

	return (zahlen[2]);
}

void a15(){

	int zahlen[5];
	int j;
	printf("Bitte 5 Zahlen Eingeben:\n");
	for(j = 0; j < 5; j++){
		scanf("%d", & zahlen[j]);
	}
	printf("\nMedian ist %d\n", berechneMedian(zahlen));
}
