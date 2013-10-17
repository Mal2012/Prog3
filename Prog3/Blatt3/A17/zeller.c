/*
 * zeller.c
 *
 *  Created on: 17.10.2013
 *      Author: Malcolm
 */

int a17(int argc, char **argv) {
	int t=0, m=0, y=0, h=0, j=0;
	printf("Bitte Tag eingeben: \n");
	scanf("%i", &t);
	printf("\nBitte Monat eingeben: \n");
	scanf("%i", &m);


	printf("\nBitte Jahr eingeben: \n");
	scanf("%i", &y);

	j=y%100;
	h=y/100;
	if(m==1||m==2){
		m+=12;
		j-=1;
	}
	int w = ((t + (((m + 1) * 26) / 10) + ((5 * j) / 4) + (h / 4) - (2 * h) - 1) % 7);

	while(w<0){
		w+=7;
	}

	switch(w){
	                case 0 : printf("Sonntag\n");
	                        break;
	                case 1 : printf("Montag\n");
	                        break;
	                case 2 : printf("Dienstag\n");
	                        break;
	                case 3 : printf("Mittwoch\n");
	                        break;
	                case 4 : printf("Donnerstag\n");
	                        break;
	                case 5 : printf("Freitag\n");
	                        break;
	                case 6 : printf("Samstag\n");
	                        break;
	                default:
	                        printf("ERROR\n");
	        }

	return 0;
}


