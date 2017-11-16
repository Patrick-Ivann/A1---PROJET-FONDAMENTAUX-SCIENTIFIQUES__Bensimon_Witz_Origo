#include <stdio.h>
#include <stdlib.h>
#include "menu.c"


int main(int argc, char const *argv[])
{
	int choix

	choix =selection();
	generation(choix);
	return 0;
}	
