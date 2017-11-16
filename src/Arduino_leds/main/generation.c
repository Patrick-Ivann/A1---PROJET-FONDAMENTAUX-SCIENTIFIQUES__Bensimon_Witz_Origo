#include "generation.h"
#ifndef SYMBOL
#define chemin "F:\\ecole\\Projet\\A1 - PROJET FONDAMENTAUX SCIENTIFIQUES__Bensimon_Witz_Origo\\src\\Arduino_leds\\main\\param.h"
#endif
int generation(int choix){

	FILE *fout = NULL;
 	fout = fopen(chemin, "w");

    if (fout == NULL)
    {
        printf("Impossible d'ouvrir le fichier .txt");
        exit(EXIT_FAILURE);
    }




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



