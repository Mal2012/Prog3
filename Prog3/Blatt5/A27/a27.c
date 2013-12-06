int a27() {


char *c[] = { "he dast ga", "lllt dumm", "C i", "dar nich" };
        char **cp[] = { c+3, c+2, c+1, c };
        char ***cpp = cp;

        /* cpp zeigt auf 0. Zeiger in cp, cp hat Referenzen auf c in einer bestimmten Reihenfolge */

        /* 1. inkrementiere cpp und geb den Inhalt von Zeiger von Zeiger : ++cpp -> c + 2 => "C i" */
        printf( "%s", **(++cpp));

        /* 2. inkrementiere cpp, welcher immer noch auf c + 2 zeigt -> c + 1, nehme dessen Inhalt (auch ein Zeiger) ... */
        /* ...und dekrementiere diesen, nehme dessen inhalt und erhöhe um 5 Stellen -> array[0] -> array[5] => "st ga" */
        printf( "%s", *(--*(++cpp)) + 5);

        /* nehme cpp an der Position [-2] : c + 3 -> nehme Zeiger auf [0] und erhöhe um 2 => "r nich" */
        printf( "%s", cpp[-2][0] + 2 );

        /* nehme cpp[1] : c -> inkrementiere Position des Zeigers, nehme den Inhalt [auch Zeiger],erhöhe um 3 => "t dumm" */
        printf( "%s\n", *(cpp[1] + 1) + 3 );

        /* Ausgabe: "C ist gar nicht dumm" */

        return (0);
        }
