/*
 * a16.c
 *
 *  Created on: 12.10.2013
 *      Author: Malcolm
 */
#include <stdio.h>
#define ARRSIZE 24
char my_bitvec[ARRSIZE / 8];

int get(char* bitvec, int index);
void set(char* bitvec, int index);
void reset(char* bitvec, int index);

int get(char* bitvec, int index){
	if(index < ARRSIZE){
		  return (bitvec[index/8] & (1 << index%8) ? 1 : 0);
		}else{
			printf("\nRueckgabe des aktuellen Wertes Fehlgeschlagen\n");
			return -1;
		}
}
void set(char* bitvec, int index){
	if(index < ARRSIZE){
			my_bitvec[index / 8] |= (1 << index % 8);
		}
		else{
			printf("\nBit-Setzen fehlgeschlagen\n");
		}

}
void reset(char* bitvec, int index){
	if(index < ARRSIZE){
		my_bitvec[index / 8] &= (1 << index % 8);
	}
}
