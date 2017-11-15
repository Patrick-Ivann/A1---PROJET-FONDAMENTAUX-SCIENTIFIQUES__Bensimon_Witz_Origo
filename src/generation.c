
void generation(int choix){

	FILE *fout = NULL;
 	fout = fopen("param.h", "w");
    /* TODO : Vérifier si le fichier a bien été ouvert. Sinon, envoyer une erreur et sortir du programme */

    if (fout == NULL)
    {
        printf("Impossible d'ouvrir le fichier ResultatsHeuresTests.txt");
        exit(EXIT_FAILURE);
    }


	switch(choix) {

		case 1: fprintf(fout,"#define coeur_led_sequéntiellement");
			break;

		case 2: fprintf(fout,"#define coeur_full");
			break;

		case 3: fprintf(fout,"#define coeur_unsurtrois");
			break;

		case 4: fprintf(fout,"#define coeur_unsurdeux");
			break;

		case 5: fprintf(fout,"#define coeur_unsurdeuxsurleteco");
			break;
	}


	    fclose(fout);



}



