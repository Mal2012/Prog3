/*
 * a28.c
 *
 *  Created on: 19.11.2013
 *      Author: Malcolm
 */

#include <stdio.h>

union Ieee754 {
  int   i;
  float f;
};

int a28()
{
    union Ieee754 gleitkommazahl;
    float fZahl;
    unsigned char* cp;
    int digit, i, j;

    while(1)
    {
        /* Eingabe der Zahl */
        printf("Bitte geben Sie eine Gleitkommazahl ein (0 = Ende): ");
        scanf("%f", &fZahl);
        if (fZahl == 0.0f)
            break;

        /* Teil a): Darstellung über Pointer
                Achtung: Die Bytes liegen in umgekehrter Reihenfolge im Speicher!
                         Daher rückwärts ausgeben!
        */
        cp = (unsigned char*) &fZahl;   /* Adresse von fZahl als char-Zeiger */

        printf("\nHexadezimaldarstellung: %2X %2X %2X %2X\n",
                *(cp+3), *(cp+2), *(cp+1), *cp);

        printf("Binaerdarstellung     : ");
        for( j = 3; j >= 0; j--)
        {
            for( i = 0; i <= 7; i++)
            {
                digit = ((*(cp+j)) >> (7-i)) & 0x01;
                printf("%d", digit);
                if (i==0 && j>=2)
                    printf(" ");
            }
        }

        /* Teil b): Darstellung über Union */
        gleitkommazahl.f = fZahl;
        printf("\n\nTeil b): Darstellung mittels Union\n");
        printf("Hexadezimaldarstellung: %X\n", gleitkommazahl.i);
        for( i = 0; i <= 7; i = i+1)
        {
            digit = (gleitkommazahl.i >> 4*(7-i)) & 0x0f;
            if( digit < 10)
                printf("%d", digit);
            else
                printf("%c", 'A' - 10 + digit);
        }

        printf("\nBinaerdarstellung     : ");
        for( i = 0; i <= 31; i = i+1)
        {
            digit = (gleitkommazahl.i >> (31-i)) & 0x01;
            printf("%d", digit);
            if (i == 0 || i == 8)
                printf(" ");
        }
        printf("\n\n");
    }

    return 0;
}
