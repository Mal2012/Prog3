/*
 * a26.c

 *
 *  Created on: 05.11.2013
 *      Author: Malcolm
 */
#include "stdio.h"
#include "time.h"
	 char str[512];
	 FILE * fp;
	 const char * const filename = "memo.txt";
int write() {
	time_t timestamp;
	time(&timestamp);


	 printf("Bitte Eingeben: \n");

	 /* Datei oeffnen, eine Zeile anhaengen: */
	 if ((fp = fopen (filename, "a")) == NULL)
	 {
	 /* Fehlerbehandlung: */
	 fprintf (stderr,
	 "Datei '%s' konnte nicht zum Anhaengen"
	 " geoeffnet werden!\n", filename);
	 return 1;
	 }

	 fprintf (fp, "-----------------------------\n%s\n", ctime(&timestamp));
	 while(*(fgets(str, sizeof(str), stdin)) != '.'){
		 fputs(str, fp);
	 }

	 printf("Speichern...\n");

	 fclose (fp);
	 return 0;
}

int a26(){
	while(1){
		system("cls");
	printf("\t %s\n", "Hauptmenue");
	printf("\t %s\n\n", "==========");
	printf("%s\n", "(E)ingeben");
	printf("%s\n", "(A)usgeben");
	printf("%s\n\n", "(B)eenden");
	printf("%s\n", "Was wuenschen Sie zu tun ?");
	char zeichen;
	scanf("%c", &zeichen);

	switch (zeichen) {
		case 'E':
				system("cls");
				write();
				system("pause");
				break;

		case 'A':
				system("cls");
				read();
				system("pause");
				break;
		case 'B':
						return 0;
							break;

	}
	}
	return 0;
}


int read(){
	printf("Ausgabe: \n");
	if((fp = fopen(filename, "rb")) == NULL){
	                        fprintf(stderr, "Datei %s kann nicht geöffnet werden!\n", filename);

	                        return (1);
	                }
	        int i = 0;
	        fputs("\n", stdout);
	        while(fgets(str,512, fp)){
	        printf("%d\t", ++i);
	        fputs(str, stdout);
	        }
	        return (0);
};
