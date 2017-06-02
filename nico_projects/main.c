#include <stdio.h>


int main(int argc, char ** argv) {

	char * nomFichier = argv[1];
	FILE* fichier = NULL;
	int result;
	char caractereActuel;

	fichier = fopen(nomFichier, "r"); /*ouverture du fichier en lecture seule*/
	
	if (fichier != NULL)
    {
    	/*possibilité de lire dans le fichier*/
        printf("L'ouverture du fichier a réussi ! \n#################################\n");

        do
        {

            caractereActuel = fgetc(fichier); 

            printf("%c", caractereActuel); 

        } while (caractereActuel != EOF);
        printf("\n");


        result = fclose(fichier); /*fermeture du fichier pour liberer la mémoire*/
        if(result == 0) {
        	printf("#################################\nLa fermeture du fichier a réussi! \n");
        }
        else {
        	perror("Erreur lors de la fermeture du fichier");
        }
    }
    else {
    	perror("Impossible d'ouvrir le fichier");
    	return -1;
    }


	return 0;
}