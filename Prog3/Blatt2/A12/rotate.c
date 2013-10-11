/*
 * rotate.c
 *
 *  Created on: 10.10.2013
 *      Author: Malcolm
 */

#include <stdio.h>
unsigned char rotate_bits(unsigned char c, int n);

int a12(void){
	unsigned char c;
	int n;
	printf("Bitte Buchstaben eingeben: ");
	scanf("%c", &c);
	printf("\nBitte Anzahl der Shifts eingeben: ");
	scanf("%i", &n);
	c= rotate_bits(c, n);
	printf("\nErgebnis: %c\n", c);
	return 0;
}


unsigned char rotate_bits(unsigned char c, int n){
	n = n%8;
	int i;

	for(i=0;i<n;i++){
		if(c>=128){
			c=(c<<1)+1;
		}
		else{
			c= c<<1;
		}
	}

	return c;
}
