/*
 * a32.h
 *
 *  Created on: 05.12.2013
 *      Author: Malcolm
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct kettenglied {
	  int wert;
	  struct kettenglied* vorg;
	  struct kettenglied* nachf;
} glied;

glied* position = NULL;
