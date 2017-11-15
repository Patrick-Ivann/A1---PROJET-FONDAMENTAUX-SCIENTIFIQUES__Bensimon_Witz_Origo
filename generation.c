#include "generation.h"
int generation(int choix){

	FILE *fout = NULL;
 	fout = fopen("param.h", "w+");
    /* TODO : Vérifier si le fichier a bien été ouvert. Sinon, envoyer une erreur et sortir du programme */

    if (fout == NULL)
    {
        printf("Impossible d'ouvrir le fichier .txt");
        exit(EXIT_FAILURE);
    }

    printf("%d fdgdsgsdgs",choix);



		switch(choix) {

		case 1: fprintf(fout,"#define selection 1");
				 
			break;

		case 2: fprintf(fout,"#define selection 2 ");
				 
			break;

		case 3: fprintf(fout,"#define selection 3");
				 
			break;

		case 4: fprintf(fout,"#define selection 4");
				 
			break;

		case 5: fprintf(fout,"#define selection 5");
				 
			break;
		}
	



	    fclose(fout);

	    return 2;



}



