#include <Arduino.h>
#include <LiquidCrystal.h>

LiquidCrystal lcd(7,6,5,4,3,2);
void setup() {
  lcd.begin(16,2);
}

/*void loop() {
   lcd.setCursor(0,0);
   lcd.print("Vilca Cabrito");
   lcd.setCursor(0,1);
   lcd.print(" x");
   lcd.print(millis()/1000);
   lcd.cursor();
   delay(500);
   lcd.noCursor();
   delay(500);
}*/
//DEZPLAZAMIENTO
void loop() {
   lcd.setCursor(2,0);
   lcd.print("Prueba scrolling");
   lcd.scrollDisplayLeft();
   delay(1000);
   
}