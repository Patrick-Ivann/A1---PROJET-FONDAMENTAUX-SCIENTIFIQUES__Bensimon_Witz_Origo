#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "donnees.c"

int main(int argc, char const *argv[])
{

	struct donnees *data_tab[tailleMax];

/*	ChargmentLignes(25,data_tab);
*/	

	chargement2(data_tab);
	return 0;
}