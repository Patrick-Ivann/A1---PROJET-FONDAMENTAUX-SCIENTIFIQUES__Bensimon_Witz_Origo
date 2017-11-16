 /*
 ============================================================================
 Name        : menu
 Author      : Patrick-Ivann Origo  cleaned by Romain Witz
 Version     :
 Description :  permet de choisir les fonction à executer via un scanf et une switch 
 
 ============================================================================
 */

 int choix(){

 	int select = 0 ;

		printf("					Veuillez choisir un des modes d'affichage\n");
		printf("afficahge brute (1)\n");
		printf("poul croissant (2)\n");
		printf("poul decroissant(3)\n");
		printf("temps croissant (4)\n");
		printf("temps decroisant(5)\n");
		printf("moyenne des pouls (6)\n");
		printf("valeur maximale du poul(7)\n");
		printf("valeur minimale (8)\n");
		printf("rechercher(9)\n");


		
		scanf("%d",&select);

		if( select > 10 || select < 1)
		{
			choix();
		}

		return select;

 




}	