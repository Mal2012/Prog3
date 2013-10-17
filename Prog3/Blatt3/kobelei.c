/*
 * kobelei.c
 *
 *  Created on: 15.10.2013
 *      Author: Malcolm
 */
#include <stdio.h>
#include <conio.h>

int knobelei(int argc, char *argv[])
{
 char *z;
 char code[] = "SKIANZUG";
 z = *++argv;
 z += 4;
 while (*z - '7')
 printf("%c", code[*z-- - '0']);

 printf("\n");
 return 0;
}

