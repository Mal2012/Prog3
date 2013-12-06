/*
 * pointerbsp.c
 *
 *  Created on: 02.12.2013
 *      Author: Malcolm
 */

int bsp4 (void)
{
 short int zahl, * pointer1; /* pointer1 ist ein Pointer auf short int */
 unsigned char * pointer2; /* pointer2 ist ein Pointer auf unsigned char */
 zahl = 0x7FED; /* Wertzuweisung an Variable zahl */
 printf ("Zahl ist: %x \n", zahl);
 pointer1 = &zahl; /* pointer1 auf short int-Variable zahl setzen */
 printf ("\npointer1 zeigt auf die Adresse: ");
 printf ("%p \n", pointer1);
 printf ("Der Inhalt an der Adresse pointer1 ist: %x \n", *pointer1);
 /* Pointertyp-Konvertierung */
 pointer2 = (unsigned char*)pointer1;
 /* Ausgabe des niederwertigen Bytes */
 printf ("\nAusgabe des niederwertigen Bytes:\n");
 printf ("\npointer2 zeigt auf die Adresse: %p \n", pointer2);
 printf ("Der Inhalt an der Adresse pointer2 ist: %x \n", *pointer2);
 pointer2 += 1; /* pointer2 wird um 1 erhoeht */
 printf ("\n\npointer2 wurde um 1 erhoeht\n");
 /* Ausgabe des hoeherwertigen Bytes */
 printf ("\nAusgabe des hoeherwertigen Bytes:\n");
 printf ("\npointer2 zeigt jetzt auf die Adresse: ");
 printf ("%p \n", pointer2);
 printf ("Der neue Inhalt an der Adresse pointer2");
 printf (" ist: %x \n\n", *pointer2);
 getch();
 return 0;
}
