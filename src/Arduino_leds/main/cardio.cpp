#include "cardio.h"
#include "Arduino.h"
#include "FreqMeasure.h"

int time;
int temps(){
  time = millis(); // compte le temps depuis l'ouverture du programme
  Serial.println(time);
  delay(1000);
  return time;
}

int pouls(){
  int sum = 0;
  int count = 0;
  double frequency;
  if (FreqMeasure.available()) {
    // average several reading together
    sum = sum + FreqMeasure.read();
    count = count + 1;
    if (count > 30) {
      frequency = F_CPU / (sum / count);
      sum = 0;
      count = 0;
    }
  }
  return frequency;
}
