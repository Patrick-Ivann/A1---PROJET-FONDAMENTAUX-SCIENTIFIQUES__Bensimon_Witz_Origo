#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "donnees.h"


/*
 ============================================================================
 Name        : module4_ donnees
 Author      : Patrick-Ivann Origo  cleaned by Romain Witz
 Version     :
 Description : permet de réquisitionner le fichier CSV qui est dans le meme dossier que l'exécutable et de le renvoyer pour le reste du code
 ============================================================================
 */

    FILE *lecture(){

     


        FILE *fichier = fopen("Battements.csv", "r");

         if (fichier == NULL)
        {
            printf("Impossible d'ouvrir le fichier test.txt");
            fclose(fichier);
            exit(EXIT_FAILURE);
        }  

        return  fichier;      

}

   


   