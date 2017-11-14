#include "coeur.h"
#include "param.h"
#include "Arduino.h"

#define freq 490
#define dutyCycle 50 // 100/dutycycle 10 pour 10%, 20 pour 5%


void coeur_led_sequéntiellement(){

	int i;
	int period = 1000/freq;
  	int timing = period / dutyCycle;
	/*	for(i=0; i<11; ++i)
	*/
	for(i=4; i<14; i++)
	{
		pinMode(i, OUTPUT);
		digitalWrite(i, HIGH);// signal d'allumage donc signal 1
		delay(1200);
		//delay(timing);
		digitalWrite(i, LOW);

		delay(1200);

	/*		delay(period-timing);
	*/		
		if(i == 14){
		    i = 3;
		}


	}
	
}
