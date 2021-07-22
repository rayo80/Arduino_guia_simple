#include <Arduino.h>

void setup() {
  pinMode(13,OUTPUT);
}

void loop() {
  digitalWrite(13,HIGH);// En vez de high se puede usar 1
  delay(1000);
  digitalWrite(13,LOW);
   delay(1000);

}