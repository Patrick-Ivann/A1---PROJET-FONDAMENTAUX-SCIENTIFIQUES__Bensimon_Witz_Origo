
unsigned long time;
  int val = 0;
  int valDeux = 0;
  int valtemp = 0;
  int pulsation = 0;
  int freq = 0;
void setup() {
  Serial.begin(9600);
  }
  void loop() {
  time = millis();        /* chronometre de l'arduino*/
  valtemp = val;          
  /*val = analogRead(0);     retour provenant du circuit que l'on attrape sur le port serie 0*/
  val = random(0,101);
  valDeux = random(80,120);

  if (valtemp - val > 30 ) { /* observation de de la valeur et comparaison */
                                                    /* les 2 valeurs on détecte un battement de coeur */
    pulsation ++;                                   /* compteur de pulsation */
    
  }
  freq = pulsation/(time*10e-3);                    /* calcul de la pulsation e n fonction diu temps */
  if (pulsation == 0){                              /* on affine la précision plus on a de valeurs*/
    freq = 0;
  }
    Serial.print(time);                             
    Serial.print(";"); 
    /*Serial.println(freq*60); */
    Serial.println(valDeux);                             

    delay(4);
}                
                                  
