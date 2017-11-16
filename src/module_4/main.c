#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "donnees.c"
	





int main(int argc, char const *argv[])
{

	struct donnees tableauDonnees[tailleMax];

	lecture();



    char lignes[20];
        char temps[17];
        char pouls[3];
        int nombre_de_ligne; 
        int j,i,skip_les_lignes,k,longueur,l;
        FILE *fichier;
        long temps_fin  = atol(temps);
        int pouls_fin   = atol(pouls);

         i = 1;
        nombre_de_ligne = 20;

        fichier = lecture();



         skip_les_lignes = 20;
        for( j = 0; j < skip_les_lignes; j++ ){
            fgets(lignes, 81, fichier);
        }

        while ( fgets(lignes, 81, fichier) != NULL && (i <= nombre_de_ligne) ){
            if( lignes[j] == ';' ){

            } else {
                i++;
                 longueur = strlen(lignes);


                for( k = 0; k < longueur; k++ ){
                    if( lignes[k] == ';' ){
                        for( l = 0; l < k; l++ ){
                            temps[l] = lignes[l];
                            if( l == k-1){
                                temps[l+1] = '\0';
                            }
                        }
                        pouls[0] = lignes[k+1];
                        pouls[1] = lignes[k+2];
                        pouls[2] = lignes[k+3];
                    }
                }

                printf("temps : %s - ", temps);
                if( pouls[2] == '\n' ){
                    pouls[2] = '\0';
                }
                printf("Pouls : %s\n", pouls);

                
                tableauDonnees[i-1].temps = temps_fin;
                tableauDonnees[i-1].pouls = pouls_fin;
            }
        }

    



	

/*	chargement2(data_tab);
*/	return 0;
}