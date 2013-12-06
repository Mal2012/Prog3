#include "stdio.h"



int strlaenge (const char* str){
	int i =0;
	while(str[i] != '\0'){
		i++;
	}
	return i;
}



int substr (const char* str1, const char* str2){
	int rest = strlaenge(str2);
	if(strlaenge(str2)>strlaenge(str1)){
		return -1;
	}
	int i = 0;
	int j = 0;
	for(i=0;str1[i] != '\0';i++){
		if(str1[i]==str2[0]){
			for(j=0;str2[j]!='\0';j++){
				if(str1[i+j]==str2[j]){
					rest--;
				}else{
					rest = strlaenge(str2);
					break;
				}
				if(rest == 0){
					return i;
				}
			}
		}

	}

	return -1;
}

int a21(){
	printf("Laenge von LaLAfhsLAnsnLAc: %i\n", strlaenge("LaLAfhsLAnsnLAc"));
	printf("Laenge von LAc: %i\n", strlaenge("Lac"));
	printf("Substr: %i\n", substr("sdsLAscLsscLAc", "LAc"));
	return 0;
}
