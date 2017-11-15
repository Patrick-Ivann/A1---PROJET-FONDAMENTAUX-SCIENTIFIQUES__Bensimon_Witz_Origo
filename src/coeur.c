void coeur_led_sequéntiellement(){

	int i;
	int period = 1000/freq;
  	int timing = period / dutyCycle;
	/*	for(i=0; i<11; ++i)
	*/
	for(i=0; i<13; i++)
	{
		pinMode(i, OUTPUT);
		digitalWrite(i, HIGH);// signal d'allumage donc signal 1
		delay(1200);
		//delay(timing);
		digitalWrite(i, LOW);

		delay(1200);

	/*		delay(period-timing);
	*/
		if(i == 13){
		    i = 3
		}


	}

}

void coeur_unsurtrois(){

	int i;
	do{
	
/* Boucle d'allumage les 3 premieres LEDs
 * port 3 - 6 - 9 - 12
 * avec initialisation des pinOutPut celon i
 * Puis passage a l etat haut de ces ports
 */
		for(i = 3; i< 14; i+=3)
			{
				pinMode(i,OUTPUT);
				digitalWrite(i,HIGH);
			}

/* Attente de 222 ms */
			delay(222);

/* Boucle pour eteindre les 3 premieres LEDs
 * port 3 - 6 - 9 - 12
 * avec initialisation des pinOutPut celon i
 * Puis passage a l etat bas de ces ports
 */
			for(i = 4; i< 14; i+=3)
			{

				pinMode(i,OUTPUT);
				digitalWrite(i,LOW);
			}

/* Attente de 444 ms */
			delay(444);

/* Boucle d'allumage les 2 premieres LEDs
* port 4 - 7 - 10 - 13
* avec initialisation des pinOutPut celon i
* Puis passage a l etat haut de ces ports
*/
			for(i = 4; i< 14; i+=3)
			{

				pinMode(i,OUTPUT);
				digitalWrite(i,HIGH);
			}

/* Attente 222 ms */
			delay(222);

/* Boucle pour eteindre les 2 premieres LEDs
* port 3 - 6 - 9 - 12
* avec initialisation des pinOutPut celon i
* Puis passage a l etat bas de ces ports
*/
			for(i = 4; i< 14; i+=)
			{

				pinMode(i,OUTPUT);
				digitalWrite(i,LOW);
			}
/* Attente de 444 ms */
			delay(444);

/* Repeter tout la sequence */
	}while(i<1);
}

void coeur_unsurdeux(){

	int i;
	do{
/* Boucle d'allumage des 2 premieres LEDs
* port 4 - 7 - 10 - 13
* avec initialisation des pinOutPut celon i
* Puis passage a l etat haut de ces ports
*/
		for(i = 3; i< 14; i+=2)
			{

				pinMode(i,OUTPUT);
				digitalWrite(i,HIGH);
			}
			delay(222);

			for(i = 4; i< 14; i+=2)
			{

				pinMode(i,OUTPUT);
				digitalWrite(i,LOW);
			}
			delay(444);

			for(i = 4; i< 14; i+=2)
			{

				pinMode(i,OUTPUT);
				digitalWrite(i,HIGH);
			}
			delay(222);

			for(i = 4; i< 14; i+=2)
			{

				pinMode(i,OUTPUT);
				digitalWrite(i,LOW);
			}
			delay(444);

	}while(i<1);
}

void coeur_full(){
	
	int i;
	do{

		for(i = 4; i< 14; i++){

		pinMode(i,OUTPUT);
		digitalWrite(i,HIGH);
		}
		delay(222);
		for(i = 4; i< 14; i++){

		pinMode(i,OUTPUT);
		digitalWrite(i,LOW);
		}
		delay(444);
	}
}


void coeur_unsurdeuxsurleteco(){
	int i;
	do{
	
		for(i = 4; i< 8; i+=2)
			{

				pinMode(i,OUTPUT);
				digitalWrite(i,HIGH);
			}
			delay(222);

			for(i = 4; i< 8; i+=2)
			{

				pinMode(i,OUTPUT);
				digitalWrite(i,LOW);
			}
			delay(444);

			for(i = 4; i< 13; i+=2)
			{

				pinMode(i,OUTPUT);
				digitalWrite(i,HIGH);
			}
			delay(222);

			for(i = 4; i< 13; i+=2)
			{

				pinMode(i,OUTPUT);
				digitalWrite(i,LOW);
			}
			delay(444);

	}while(i<1);
}

