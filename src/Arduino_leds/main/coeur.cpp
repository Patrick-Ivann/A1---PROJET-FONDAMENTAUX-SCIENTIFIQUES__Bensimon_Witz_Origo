#include "coeur.h"
#include "Arduino.h"
#include "param.h"

/* Fonction d'allumage séquentielle */
void coeur_sequentielle(){

  int i;
  //int period = 1000/freq;
  //int timing = period / dutyCycle;

/*
 * Boucle pour les pins 4 a 13
 * Allumage, attente 1200ms
 * eteindre, attente 1200ms,
 * recommencer
 */
    for(i=4; i<14; i++)   
  {
    pinMode(i, OUTPUT);
    digitalWrite(i, HIGH); // signal d'allumage donc signal 1
    delay(1200); //delay(timing);
    digitalWrite(i, LOW);

    delay(1200); //delay(timing);

  /*    delay(period-timing);
  */    
  } 
}

/* Fonction pour allumer une LED sur 3 de facon alterne. */
void coeur_unsurtrois(){

  int i;

    for(i = 7; i< 14; i+=3)
      {
        pinMode(i,OUTPUT);
        digitalWrite(i,HIGH);
      }
      delay(222); //delay(timing);


      for(i = 7; i< 14; i+=3)
      {
        pinMode(i,OUTPUT);
        digitalWrite(i,LOW);
      }
      delay(444);
      //delay(period-timing);

      for(i = 3; i< 14; i+=3)
      {

        pinMode(i,OUTPUT);
        digitalWrite(i,HIGH);
      }
      delay(222);
          //delay(timing);


      for(i = 3; i< 14; i+=3)
      {

        pinMode(i,OUTPUT);
        digitalWrite(i,LOW);
      }
      delay(444);
      //delay(period-timing);
}

/*
 * Fonction d'allumage une sur deux
 */
void coeur_unsurdeux(){

  int i;
    for(i = 7; i< 14; i+=2)
      {

        pinMode(i,OUTPUT);
        digitalWrite(i,HIGH);
      }
      delay(222);
          //delay(timing);


      for(i = 7; i< 14; i+=2)
      {

        pinMode(i,OUTPUT);
        digitalWrite(i,LOW);
      }
      delay(444);
      //delay(period-timing);

      for(i = 4; i< 14; i+=2)
      {

        pinMode(i,OUTPUT);
        digitalWrite(i,HIGH);
      }
      delay(222); //delay(timing);


      for(i = 4; i< 14; i+=2)
      {

        pinMode(i,OUTPUT);
        digitalWrite(i,LOW);
      }
      delay(444); //delay(period-timing);
}

/*
 * Fonction d'allumage de tout le coeur
 */
void coeur_full(){
  
  int i;

    for(i = 4; i< 14; i++){

    pinMode(i,OUTPUT);
    digitalWrite(i,HIGH);
    }
    delay(222);
    //delay(timing);

    for(i = 4; i< 14; i++){

    pinMode(i,OUTPUT);
    digitalWrite(i,LOW);
    }
    delay(444);
    //delay(period-timing);
  
}

/*
 * Fonction d'allumage de coté deux a deux
 */
void coeur_symetrie(){
   int i, j;
   j = 8;
   for (i = 8; i>2; i -=1)
   {
    if (j == 14)
    {
      j = 8;
    }
    if (i != 3){
      pinMode(i, OUTPUT);
      digitalWrite(i, HIGH);
    }

    if (j != 8)
    {
      pinMode(j, OUTPUT);
      digitalWrite(j, HIGH);
    }
    delay(666);

    digitalWrite(i, LOW);
    digitalWrite(j, LOW);

    delay(666);
    j +=1;
   }
}


/*    for(i = 4; i< 8; i+=2)
     {
        pinMode(8,OUTPUT);
        digitalWrite(8,HIGH);
      }
      delay(222);
          //delay(timing);

      for(i = 4; i< 8; i+=2)
      {

        pinMode(i,OUTPUT);
        digitalWrite(i,LOW);
      }
      delay(444);
      //delay(period-timing);

      for(i = 10; i< 14; i+=2)
      {

        pinMode(i,OUTPUT);
        digitalWrite(i,HIGH);
      }
      delay(222);
          //delay(timing);


      for(i = 10; i< 14; i+=2)
      {

        pinMode(i,OUTPUT);
        digitalWrite(i,LOW);
      }
      delay(444);
      //delay(period-timing);

}*/




