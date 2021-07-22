#include <Arduino.h>
int BRILLO;
int POT =0; //ENTRADA DEL PIN A0

void setup() {
  pinMode(3,OUTPUT);
}

void loop() {
  BRILLO = analogRead(POT)/4;//EL  /4 POR LA DIFERENCIA DE RESOLUCION
  analogWrite(3,BRILLO);
}