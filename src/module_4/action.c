/* fonction du tri à bulle 
 tab[] est le tableau que l'on veut trier , on attend des tableaux à valeur réel
 membres est le nombres d'élements dans le tableau 
 */
void bulle(struct donnes tab[], int membres){

	

	int inversee = 1;
      int z = 0;
      int temp;
      int i;
      while (inversee) {
            inversee = 0;
            z++;
            for (i = 0; i < membres - z; i++) {
                  if (tab[i] > tab[i + 1]) {
                        temp = tab[i];
                        tab[i] = tab[i + 1];
                        tab[i + 1] = temp;
                        inversee = 1;
                  }
            }
      }
}


