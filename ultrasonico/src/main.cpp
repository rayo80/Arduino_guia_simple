#include <Arduino.h>
int TRIG = 10;
int ECO = 9;
int LED = 3;
int DURACION;
int DISTANCIA;

void setup() {
  pinMode(TRIG,OUTPUT);//PIN 10 SALIDA DIGITAL
  pinMode(ECO,INPUT);//PIN 9 INPUT
  pinMode(LED,OUTPUT);//PIN 3 SALIDA
  //COMUNICACION SERIAL
  Serial.begin(9600);//9600 tasa de velocidad


}

void loop() {
  digitalWrite(TRIG,HIGH); //la señal del sensor en alto
  delay(1);
  digitalWrite(TRIG, LOW); //Apagamos
  DURACION = pulseIn(ECO,HIGH); // Eco es el regreso del sensor
  DISTANCIA = DURACION / 58.2; //DEVUELVE LA DISTANCIA EN CM SEGUN EL SENSOR
  Serial.println(DISTANCIA);
  delay(500);

  //se enciende el led cuando  es menor que  20
  if(DISTANCIA<=20 && DISTANCIA >=0){//ignoramos los negativos
    digitalWrite(LED,HIGH);    
  }
  else{
    digitalWrite(LED,LOW);
  }
}