/*
 * membsp.c
 *
 *  Created on: 02.12.2013
 *      Author: Malcolm
 */

void bsp1()
{
 char string1 [20] = "**********";
 char string2 [] = "####";
 memcpy (string1+3, string2, strlen (string2));
 printf ("Ergebnis von memcpy: %s\n\n", string1);
}
void bsp2()
{
 char string [] = "12345678";
 memmove (string + 2, string, strlen (string) - 2);
 printf ("Ergebnis von memmove: %s\n\n", string);
}
void bsp3()
{
 char string3 [] = {0x01, 0x02, 0x03, 0x04, 0x05, 0x06};
 char string4 [] = {0x01, 0x02, 0x03, 0x14, 0x05, 0x06};
 printf ("Vergleich String3 mit String4 ergibt: %d \n\n",
 memcmp (string3, string4, sizeof (string3)));
}

