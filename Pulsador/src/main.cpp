#include <Arduino.h>
int ESTADO= LOW;
void setup() {
  pinMode(2,INPUT);
  pinMode(3,OUTPUT);

}

void loop() {
  while(digitalRead(2)==LOW){} //espero a q se presione
  ESTADO=digitalRead(3);
  digitalWrite(3,!ESTADO);
  while(digitalRead(2)==HIGH){}//antirebote
}