#include <stdio.h>
#include <stdlib.h>
#include "menu.h"
#include "generation.c"

/*
 * Fonction de selection dans le menu de demarrage
 * Permet de choisir le mode d'affichage.
 */

int selection()
{
		int select = 0 ;

		printf("					Veuillez choisir un des modes d'allumage du module coeur\n");
		printf("mode chenille (1)\n");
		printf("mode 1/3 (2)\n");
		printf("mode 1/2 (3)\n");
		printf("mode allumage total (4)\n");
		printf("mode 1/2 side (5)\n");
		/*	printf("mode slection (6)\n");
		*/
		scanf("%d",&select);

	return select;
}
