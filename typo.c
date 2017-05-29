#include <stdio.h>
#include <string.h>
#include <time.h>
#include <unistd.h>

int main() {
	FILE *fp;
	char str[60], cop[60], copie;
	int comp, faute, mot;
	time_t t1, t2;

	/* ouverture du fichier */
	fp = fopen("file.txt" , "r");

	if(fp == NULL) {
		perror("Error opening file");
		return(-1);
	}
	t1 = time(NULL);
	while (fgets (str, 60, fp) != NULL) {
		int i = 0;
		printf("%s", str);
		copie = *fgets(cop, 60, stdin);	
		printf("\n");
		

		while (i == 0) {	
			comp = strcmp(str, cop);
			if ( comp == 0) {				
				printf("Alleeeez ! Mot suivant :\n");
				i++;
			}
			else {
				printf("Perdu ! Recommence :\n");
				printf("%s", str);		
				copie = *fgets(cop, 60, stdin);	
				printf("\n");
				faute++;
			}

		}
	}
	t2 = time(NULL);

	/* fermeture du fichier */
	fclose(fp);
	printf("Vous avez fait %d faute(s).\n", faute);
	printf("Vous avez mis : %.1f secondes pour ecrire %d mots.\n", difftime(t2, t1), mot);
	return 0;
} 
