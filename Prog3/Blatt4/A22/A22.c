/*
 * A22.c
 *
 *  Created on: 03.11.2013
 *      Author: Malcolm
 */


#include <stdio.h>
#include <string.h>
int a22(int argc, char *argv[]){

//        argv = GSVCPD

// pp zeigt auf das 1. Parameter = GSVCPD
// z = 0 + 6 = 6 => als Index zeigt auf '\0'
// Klammern wichtig!!! Zeiger ist auf --'\0' = D -> ...

// D - 1Byte = C [in ASCII Tabelle -> 'C'
// Zeiger ist auf P -> Inhalt --P  -> 'O'
// Zeiger ist auf C -> Inahlt --C  -> 'B'
// Zeiger ist auf V -> Inahlt --V  -> 'U'
// Zeiger ist auf S -> Inahlt --S  -> 'R'
// Zeiger ist auf G -> Inahlt 0-0  -> 'G'

// pp = Array aus Strings, in dem Fall: argv

        char **pp, *z;
        if (argc >1){
                pp = argv + 1;
                z = *pp + strlen(*pp);
                while (*pp -(--z))        {
                        printf("%c", --*z);
                }
                printf("%c\n", *z);
        }
        return (0);
}
