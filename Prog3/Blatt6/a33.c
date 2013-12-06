/*
 * a33.c
 *
 *  Created on: 05.12.2013
 *      Author: Malcolm
 */


#include <stdio.h>
typedef struct spvector {
	int pos;
	double wert;
	struct spvek* next;
}spvek;

spvek* first;

int insertVal(int idx, double wert){
	spvek* p = first;
	for(; p != NULL; p = p->next) {
			if (p->pos == idx) {
				p->wert = wert;
				return idx;
			}
		}
		if (p == NULL) {
			spvek* ne =
				(spvek*)malloc(sizeof(spvek));
			ne->pos = idx;
			ne->wert = wert;
			ne->next = first;
			first = ne;
		}

	return 0;
}
double getValue(int idx)
{
	spvek* p = first;
	for(; p != NULL; p = p->next) {
		if (p->pos == idx) {
			return p->wert;
		}
	}

	return -1;
}

int a33(){
	insertVal(17, 3.14);
	insertVal(34, 6.28);
	insertVal(1234, 0.001);

	printf("Wert[%d] = %.3lf\n", 17, getValue(17));
	printf("Wert[%d] = %.3lf\n", 34, getValue(34));
	printf("Wert[%d] = %.3lf\n", 35, getValue(35));
	return 0;
}
