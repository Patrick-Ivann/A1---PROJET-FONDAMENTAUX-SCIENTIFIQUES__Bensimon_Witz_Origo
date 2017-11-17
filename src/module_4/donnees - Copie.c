#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "donnees.h"

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

   


   