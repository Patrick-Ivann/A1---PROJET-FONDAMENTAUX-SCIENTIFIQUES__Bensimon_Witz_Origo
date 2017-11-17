#include "cardio.h"
#include "coeur.h"
#include "param.h"
#include "FreqMeasure.h"



int i;



void setup()
{
  Serial.begin(9600);
  FreqMeasure.begin();
  
 



}

void loop()
{
  int temps_var, pouls_var;
  temps_var = temps();
  pouls_var = pouls();

  Serial.print(temps_var);
  Serial.print(";");
  Serial.print(pouls_var);

   switch(selection){
    case 1 : 
        coeur_sequentielle();
        break;

     case 2 : 
       coeur_unsurdeux() ;
        break;

     case 3 : 
        coeur_unsurtrois();
        break;

     case 4 : 
        coeur_full();
        break;

     case 5 : 
        coeur_symetrie();
        break;
    
    
  }


}


