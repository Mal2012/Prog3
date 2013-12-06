/* Programmieren III
   Hochschule Coburg
   Woche 5, Aufgabe 29
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

#include "a29.h"

int a29main(int argc, char *argv[])
{
    struct List list;
    init(&list);
    insert(&list, 1, "18.11.11");
    insert(&list, 1, "19.11.11");
    insert(&list, 5, "20.11.11");
    insert(&list, 5, "21.11.11");
    insert(&list, 0, "22.11.11");
    print(&list);
    removeElements(&list, 1);
    print(&list);
    removeElements(&list, 0);
    print(&list);
    removeElements(&list, 5);
    print(&list);
    clear(&list);

    return 0;
}
