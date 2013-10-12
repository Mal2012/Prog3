/*
 * comp.c
 *
 *  Created on: 11.10.2013
 *      Author: Malcolm
 */


#include<stdio.h>

int a13(void)
{

int a = 4;
double b = 8;
int c = b;
char z;
printf("%lf\n", a*b/c);
printf("%lf\n", a/c*b);
printf("%lf\n", a/b*c);
printf("%lf\n", 1/(c/a*b));
z = getch();

return 0;

}
