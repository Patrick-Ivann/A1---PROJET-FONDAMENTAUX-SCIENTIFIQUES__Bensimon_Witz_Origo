#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "donnees.h"

/*    void ChargmentLignes(int nombre_de_ligne, struct donnees **tableauDonnees){

        char lignes[20];
        char temps[17];
        char pouls[3];
        int j,i,skip_les_lignes,k,longueur,l;

        FILE *fichier = fopen("Battements.csv", "r");

         if (fichier == NULL)
        {
            printf("Impossible d'ouvrir le fichier test.txt");
            fclose(fichier);
            exit(EXIT_FAILURE);
        }        


         i = 1;



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

                tableauDonnees[i-1]->temps = (temps);
                tableauDonnees[i-1]->pouls = (pouls);
            }
        }

        fclose(fichier);
    }
*/

    void chargement2(struct donnees **tableauDonnees){

        char lignes[20];
        char temps[17];
        char pouls[3];
        int e1,e2,i;

          FILE *fichier = fopen("Battements.csv", "r");

         if (fichier == NULL)
        {
            printf("Impossible d'ouvrir le fichier test.txt");
            fclose(fichier);
            exit(EXIT_FAILURE);
        }        
        while(fgets(lignes,81,fichier) != NULL)
        {

            sscanf(lignes," %d  %d", &e1,&e2);
            tableauDonnees[i-1]->temps = atol(temps);
            tableauDonnees[i-1]->pouls = atol(pouls);
            printf("Pouls : %s\n", pouls);



        }
    }