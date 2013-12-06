/*
 * a25.c
 *
 *  Created on: 05.11.2013
 *      Author: Malcolm
 */
struct Punkt
{
 float x;
 float y;
};


int a25() {

	struct Punkt P1 = {
			-1.1, 3.5
	};
	struct Punkt P2 = {
			2.4, -0.7
	};


    double parameter[2] = {0, 0};

       if(P1.x != P2.x){

               double m = ((P2.y - P1.y) / (P2.x - P1.x));
               double c = P2.y - (m * P2.x);

               parameter[0] = m;
               parameter[1] = c;

       }

       printf("Erster Punkt: %f, %f\n", P1.x, P1.y);
       printf("Zweiter Punkt: %f, %f\n", P2.x, P2.y);
       printf("Für die Gerade y = mx + c durch P1 und P2 gilt:\n");
       printf("m= %f und %f\n", parameter[0], parameter[1]);
       return (0);

}




