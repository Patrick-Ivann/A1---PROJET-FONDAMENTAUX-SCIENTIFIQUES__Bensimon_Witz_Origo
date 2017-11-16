#include "coeur.h"
#include "Arduino.h"
#include "param.h"

void coeur_sequentielle(){

  int i;
//  int period = 1000/freq;
    //int timing = period / dutyCycle;
  /*  for(i=0; i<11; ++i)
  */

  

    for(i=4; i<14; i++)   
  {
    pinMode(i, OUTPUT);
    digitalWrite(i, HIGH);// signal d'allumage donc signal 1
    delay(1200);
    //delay(timing);
    digitalWrite(i, LOW);

    delay(1200);

  /*    delay(period-timing);
  */    
  } 
    

  
}
void coeur_unsurtrois(){

  int i;
  
    for(i = 7; i< 14; i+=3)
      {

        pinMode(i,OUTPUT);
        digitalWrite(i,HIGH);
      }
      delay(222);
          //delay(timing);



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
      delay(222);
          //delay(timing);


      for(i = 4; i< 14; i+=2)
      {

        pinMode(i,OUTPUT);
        digitalWrite(i,LOW);
      }
      delay(444);
      //delay(period-timing);


}

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


void coeur_unsurdeuxsurleteco(){
   int i;
 
    for(i = 4; i< 8; i+=2)
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

}


