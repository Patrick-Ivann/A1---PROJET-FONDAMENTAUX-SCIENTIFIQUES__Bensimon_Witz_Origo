#include "cardio.h"
#include "coeur.h"
#include "param.h"

int i;



void setup()
{
	Serial.begin(9600);



}

void loop()
{
	int temps, pouls;
	temps = temps();
	pouls = pouls();

	Serial.print(temps);
	Serial.print(";");
	Serial.print(pouls);


}

