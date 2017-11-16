#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "action.h"

void affichage(donnees tab[], int membres)
{
      int y;
      for ( y = 0; y < 20; ++y)
{
      printf(" les pouls  %ld   temps - %ld \n",tab[y].pouls,tab[y].temps);

}
}

/* fonction du tri à bulle de la plus petite à la plus grande
exploite la technique de la substitution  
 tab[] est le tableau que l'on veut trier , on attend des tableaux à provenant de la structure déclarées plus tot tab[] est le tableau que l'on veut trier , on attend des tableaux à provenant de la structure déclarées plus tot 
 membres est le nombres d'élements dans le tableau 
 elle ne va rien renvoyer car va modifier le tableau directement ,on va donc l'afficher par la suite
 */
void bulle(donnees tab[], int membres){

      

      int inversee = 1;
      int z = 0;
      int temp;
      int i;
      while (inversee) {
            inversee = 0;
            z++;
            for (i = 0; i < membres - z; i++) {
                  if (tab[i].pouls > tab[i + 1].pouls) {
                        temp = tab[i].pouls;
                        tab[i].pouls = tab[i + 1].pouls;
                        tab[i + 1].pouls = temp;
                        inversee = 1;
                  }
            }
      }
}


/* fonction du tri à bulle mais affiche les variables de la plus grande à la plus petite 
exploite la technique de la substitution  
 membres est le nombres d'élements dans le tableau 
 */
void bulleDecroissant(donnees tab[], int membres){

      

      int inversee = 1;
      int z = 0;
      int temp;
      int i;
      while (inversee) {
            inversee = 0;
            z++;
            for (i = 0; i < membres - z; i++) {
                  if (tab[i].pouls < tab[i + 1].pouls) {
                        temp = tab[i].pouls;
                        tab[i].pouls = tab[i + 1].pouls;
                        tab[i + 1].pouls = temp;
                        inversee = 1;
                  }
            }
      }
}



void bulleTemps(donnees tab[], int membres){

      

      int inversee = 1;
      int z = 0;
      int temp;
      int i;
      while (inversee) {
            inversee = 0;
            z++;
            for (i = 0; i < membres - z; i++) {
                  if (tab[i].temps > tab[i + 1].temps) {
                        temp = tab[i].temps;
                        tab[i].temps = tab[i + 1].temps;
                        tab[i + 1].temps = temp;
                        inversee = 1;
                  }
            }
      }
}


/* fonction du tri à bulle mais affiche les variables de la plus grande à la plus petite 
exploite la technique de la substitution  
 tab[] est le tableau que l'on veut trier , on attend des tableaux à provenant de la structure déclarées plus tot
 membres est le nombres d'élements dans le tableau 
 */
void bulleDecroissantTemps(donnees tab[], int membres){

      

      int inversee = 1;
      int z = 0;
      int temp;
      int i;
      while (inversee) {
            inversee = 0;
            z++;
            for (i = 0; i < membres - z; i++) {
                  if (tab[i].temps < tab[i + 1].temps) {
                        temp = tab[i].temps;
                        tab[i].temps = tab[i + 1].temps;
                        tab[i + 1].temps = temp;
                        inversee = 1;
                  }
            }
      }
}

/* fonction de recherche dichootomique donc en approximant d'abord la valeur en coupant le tableau pour la recherche donc en cherchant par le debut et la fin et le milieu
      tab[] est le tableau que l'on veut trier , on attend des tableaux à provenant de la structure déclarées plus tôt
      int membres et le nombre de caractere dans le tableau , c'est utile pour la boucle et le réprage dans tableau 
      */

/*void rechercheDich(donnees tab[], int membres)

{


      int premierePartie,dernierePartie,membreMilieu,toRecherche;
      premierePartie = 0;
      dernierePartie = membres - 1;
      membreMilieu = (premierePartie+dernierePartie)/2;

      scanf("%d",&toRecherche);
      printf("dvjxckjvcxjvdkxsjhbvksjdhkvbjdshkgkjdsh%d\n", toRecherche );

      bulle(tab,membres);

      while (premierePartie <= dernierePartie) {
            if (tab[20].temps < toRecherche)
               premierePartie = membreMilieu + 1;    
            else if (tab[membreMilieu].temps == toRecherche) {
               printf("%d on trouve à la place  %d.\n", toRecherche, membreMilieu+1);
               break;
            }
            else
               dernierePartie = membreMilieu - 1;
       
            membreMilieu = (premierePartie + dernierePartie)/2;

                   printf("%ld\n",tab[membreMilieu].pouls);  


      }




}*/

/* fonction de recherche qui  compare un à un les éléments courant avec la valeur cherchée , la valeur cherchée est démandée par un scanf et stockée dans k
      tab[] est le tableau que l'on veut trier , on attend des tableaux à provenant de la structure déclarées plus tôt
      int membres et le nombre de caractere dans le tableau , c'est utile pour la boucle et le réprage dans tableau 
*/


/*void rechercheSeq(donnees tab[] , int membres)
{

      int i,k,position;

      printf("que chercher ?\n");
      scanf("%d",&k);

      for(i=0;i<20;i++)
      {

            if(tab[i].temps=k)
            {
                  position=i+1;
                  break;
            }
      }

      if(position!=0)
      {
            printf("%d ce nombre est bien présent à la position  %d\n",k,position);
            printf("%ld\n",tab[position-1].pouls);  
      }
            

      else
            printf("%d est  impossible à trouver \n",k);


}*/

/* fonction calculant la moyenne des pouls dans la série étudiée , on ajoute chaque élements du tableaux dans une variables sommeTableau, qu'on divise ensuite au nombre d'élements
      tab est le tableau contennant les pouls de la  qu'on va étudier 
      membres est le nombre de valeur dans la série 
*/

void moyenne(donnees tab[], int membres)
{


         int n, i,sommeTableau,moyenne;
            sommeTableau = 0 ;


   

    for(i = 0; i < membres; ++i)
    {

        sommeTableau += tab[i].pouls;
    }

    moyenne = sommeTableau / membres;
    printf("la moyenne est de  %ld", moyenne);

}

/* fonction qui donne la valeur la plus petite de la série donc en réalisant un trie à bulle du plus petit au plus grand 
      tab est le tableau contennant les pouls de la  qu'on va étudier 
      membres est le nombre de valeur dans la série 
*/

void miniValeur(donnees tab[], int membres)
{

            bulle(tab,membres);

            if(tab[0].pouls = 0)
            {
                  printf("%ld\n",tab[0+1].pouls ); 
   
            }


            printf("%ld\n",tab[0].pouls ); 


}

/* fonction qui donne la valeur la plus petite de la série donc en réalisant un trie à bulle du plus petit au plus grand 
      tab est le tableau contennant les pouls de la  qu'on va étudier 
      membres est le nombre de valeur dans la série 
*/


void maxiValeur(donnees tab[], int membres)
{

            bulleDecroissant(tab,membres);

            if(tab[0].pouls > 140)
            {
                  printf("%ld\n",tab[0+1].pouls ); 
   
            }


            printf("%ld\n",tab[0].pouls ); 


}