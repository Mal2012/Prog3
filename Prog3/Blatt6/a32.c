/*
 * a32.c
 *
 *  Created on: 05.12.2013
 *      Author: Malcolm
 */

#include "a32.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void fuege_ein(int val){
	glied* neuelem = (glied*)malloc(sizeof(glied));
	neuelem->wert =val;
	if(position != NULL){
		    neuelem -> nachf = position->nachf;
		    neuelem -> vorg = position;
		    printf("neu: %d, position: %d\n", val, position->wert);
		    neuelem -> nachf -> vorg = neuelem;
		    position -> nachf = neuelem;
	}else{
			neuelem->nachf = neuelem;
			neuelem->vorg = neuelem;
	}
	position = neuelem;
}

void a32(){
	  int n;
	  struct kettenglied* p;

	  fuege_ein( 1);
	  for(p = position, n = 0; n <= 4; p = p->nachf, n++)
	    printf("%i -> ", p->wert);

	  printf("\n");
	  fuege_ein( 2);
	  for(p = position, n = 0; n <= 4; p = p->nachf, n++)
	    printf("%i -> ", p->wert);

	  printf("\n");
	  fuege_ein( 3);
	  for(p = position, n = 0; n <= 4; p = p->nachf, n++)
	    printf("%i -> ", p->wert);

	  printf("\n");
	  position = position->vorg;
	  fuege_ein( 4);
	  for(p = position, n = 0; n <= 4; p = p->nachf, n++)
	    printf("%i -> ", p->wert);

	  printf("\n");
	  position = position->nachf;
	  position = position->nachf;
	  for(p = position, n = 0; n <= 4; p = p->nachf, n++)
	    printf("%i -> ", p->wert);

	  printf("\n");
}


