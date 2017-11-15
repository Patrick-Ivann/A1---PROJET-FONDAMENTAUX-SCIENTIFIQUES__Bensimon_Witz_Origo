void coeur_unsurtrois(){

	int i;
	do{
	
/* Boucle d'allumage des 3 premiere LEDs
 * port 3 - 6 - 9 - 12
 * avec initialisation des pinOutPut celon i
 * Puis passage a l etat haut de ces ports */
		for(i = 3; i< 14; i+=3)
			{
				pinMode(i,OUTPUT);
				digitalWrite(i,HIGH);
			}
/* Attente de 222 ms */
			delay(222);

			for(i = 4; i< 14; i+=3)
			{

				pinMode(i,OUTPUT);
				digitalWrite(i,LOW);
			}
			delay(444);

			for(i = 4; i< 14; i+=3)
			{

				pinMode(i,OUTPUT);
				digitalWrite(i,HIGH);
			}
			delay(222);

			for(i = 4; i< 14; i+=)
			{

				pinMode(i,OUTPUT);
				digitalWrite(i,LOW);
			}
			delay(444);

	}while(i<1);
}

void coeur_unsurdeux(){

	int i;
	do{
	
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

