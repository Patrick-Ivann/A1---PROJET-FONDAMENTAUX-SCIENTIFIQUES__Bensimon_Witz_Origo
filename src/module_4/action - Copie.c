#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "action.h"



/* fonction du tri à bulle 
 tab[] est le tableau que l'on veut trier , on attend des tableaux à valeur réel
 membres est le nombres d'élements dans le tableau 
 */
/*void bulle( donnees tab[], int membres){

	

	int inversee = 1;
      int z = 0;
      donnees temp;
      int i;
      while (inversee) {
            inversee = 0;
            z++;
            for (i = 0; i < membres - z; i++) {
                  if (tab[i].pouls > tab[i + 1].pouls) {
                        temp = tab[i-1];
                        tab[i] = tab[i - 1];
                        tab[i - 1] = temp;
                        inversee = 1;
                  }
            }
      }
}*/

void bulle(donnees tab[], int N){
    int permut, i, j=0;
    donnees temp;

    do{
        permut=0;
        for(i=1; i<N-j; i++){
            if(tab[i-1].pouls>tab[i].pouls){
                temp=tab[i-1];
                tab[i-1]=tab[i];
                tab[i]=temp;
                permut=1;
            }
        }
        j++;
    } while(permut);
}


