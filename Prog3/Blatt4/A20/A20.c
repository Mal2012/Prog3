/*

 * A20.c
 *
 *  Created on: 03.11.2013
 *      Author: Malcolm
 */

void strcpy1 (char * s, char * t)
{
int i = 0;
while ((s[i] = t[i]) != '\0')
i++;
}

void strcpy2 (char * s, char * t)
{
while ((*t=*s)!='\0')
{
s++;
t++;
}
}

