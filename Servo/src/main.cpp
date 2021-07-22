#include <Arduino.h>
#include <Servo.h>

Servo servo1;
int PINSERVO =2;
int PULSOMIN =1000;//dependera del servomotor p,ensao y error
int PULSOMAX =2000;

void setup() {
  servo1.attach(PINSERVO,PULSOMIN,PULSOMAX);
}

void loop() {
  servo1.write(0);//envia el angulo
  delay(5000);
  servo1.write(180);
  delay(5000);
}