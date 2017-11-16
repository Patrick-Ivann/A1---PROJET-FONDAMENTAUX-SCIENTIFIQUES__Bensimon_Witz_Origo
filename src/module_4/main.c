#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "donnees.c"
#include "action.c"
#include "menu.c"

/*
 ============================================================================
 Name        : module4_ main
 Author      : Patrick-Ivann Origo  cleaned by Romain Witz
 Version     :
 Description : permet d'appeler le menu qui lui permet d'afficher toutes les réquetes programme possible ainsi que relire le fichier CSV sans faire de pointeur sur pointeur 
 ============================================================================
 */




int main()
{

	struct donnees tableauDonnees[tailleMax]; /* tableau de strucutre prennant pour espace mémoire la valeur de la macro émise dans donnees. */

	struct donnees tableauDonneesUntouched[tailleMax];


	lecture();



    char lignes[20]; 
        char temps[17];   /*le fgets  nous fait la lecture du fichier mais prend tout comme etant des caracteres*/
        char pouls[17];
        int nombre_de_ligne;  /*nombres de lignes du CSV qu'on veut lire*/
        int j,i,skip_les_lignes,k,longueur,l,z,y,m,select;
        FILE *fichier;  /*re déclaration du fichier  pour l'ouverture à l'aide de la fonction lecture*/
        long temps_fin;  /*quand on va convertire les characteres en chiffres avec le type qi va bien */
		int pouls_fin;

         i = 1;
        nombre_de_ligne = 20; 

        fichier = lecture();  /*le fichier est ouvert dans cette fonction, on utilise le return de celle ci pour l'avoir là */



         skip_les_lignes = 20;  /*on va eliminer des lignes car certaines ne sont pas utilisable*/
        for( j = 0; j < skip_les_lignes; j++ ){
            fgets(lignes, 81, fichier);
        }

        while ( fgets(lignes, 81, fichier) != NULL && (i <= nombre_de_ligne) ){ /* lecture */
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
                        pouls[0] = lignes[k+1]; /* c'est là qu'on rentre les valeurs une premiere fois */
                        pouls[1] = lignes[k+2];
                        pouls[2] = lignes[k+3];
                    }
                }

              if( pouls[2] == '\n' ){ /* on déclare le dernier element du tableau */
                    pouls[2] = '\0';
                }




                         temps_fin  = atol(temps); /* la fonction atol permet de convertire des chiffres entres guillements , à des integer */

        				 pouls_fin   = atol(pouls);



                
                tableauDonnees[i-1].temps = temps_fin; /* on vient remplir le tableau de structure à chaque fois car sans ça on ne peut rien faire car la variable s'écrase à chaque fois */
                tableauDonnees[i-1].pouls = pouls_fin;
                tableauDonneesUntouched[i-1].temps = temps_fin; /* tableau backup par que je  savais pas que le main pouvais etre réccursif */
                tableauDonneesUntouched[i-1].pouls = pouls_fin;


                
            }
        }



    
select = choix();



 switch(select)

 {
 	case 1 : 
 			affichage(tableauDonneesUntouched,20);
 			main();
 		break;

 	case 2:
			bulle(tableauDonnees,20);

			printf("les valeurs de pouls tri%ces de fa%con croissante \n",130,135);


			for ( z = 0; z < 20; ++z)
			{


				printf("%ld ",tableauDonnees[z].pouls);


			}
 			main();

 		break;

 	case 3: 
 			bulleDecroissant(tableauDonnees,20);

			printf("les valeurs de pouls tri%ces de fa%con d%ccroissant \n",130,135,130);



			for ( z = 0; z < 20; ++z)
			{


				printf("%ld ",tableauDonnees[z].pouls);

			}
 			main();

 		break;

 	case 4: 
 			bulleTemps(tableauDonnees,20);
 			printf("les valeurs de temps tri%ces de fa%con croissant \n",130,135);

			for ( z = 0; z < 20; ++z)
			{


				printf("temps  - %ld \n",tableauDonnees[z].temps);
			}

 			main();

 		break;

 	case 5: 
 			bulleDecroissantTemps(tableauDonnees,20);

 			printf("les valeurs de temps tri%ces de fa%con d%ccroissant \n",130,135,130);

			for ( z = 0; z < 20; ++z)
			{


				printf("temps  - %ld \n",tableauDonnees[z].temps);
			}


 			main();

 		break;

	case 6: 
			bulle(tableauDonnees,20);
 			moyenne(tableauDonnees,20);
 			main();

 		break;

 	case 7: 

 			bulle(tableauDonnees,20);
 			maxiValeur(tableauDonnees,20);
 			main();

 		break;

 	case 8: 
 			bulle(tableauDonnees,20);
 			miniValeur(tableauDonnees,20);
 			main();

 		break;



 }




	

/*	chargement2(data_tab);
*/	return 0;
}


