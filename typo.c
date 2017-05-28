#include <stdio.h>

int main() {
	FILE *fp;
	char str[60];
	char cop[60];
	/* ouverture du fichier */
	fp = fopen("file.txt" , "r");

	if(fp == NULL) {
		perror("Error opening file");
		return(-1);
	}

	while (fgets (str, 60, fp) != NULL) {
		printf("%s\n", str);
		char copie = scanf("%s", cop);
	//	if(str == cop) {		
	//	}
	}

	/* fermeture du fichier */
	fclose(fp);
	return 0;
} 
