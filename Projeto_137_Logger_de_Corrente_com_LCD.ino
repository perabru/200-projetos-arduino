// Projeto 137 - Logger de Corrente com LCD
// Arduino Uno | Arduino Neon Lab

#include <Wire.h>
 #include <LiquidCrystal_I2C.h>

 LiquidCrystal_I2C lcd(0x27,16,2);
 void setup(){ lcd.init(); lcd.backlight(); }
 void loop(){
   float tensao = analogRead(A0) * 5.0 / 1023.0;
   float corrente = (tensao - 2.5) / 0.185;
   lcd.setCursor(0,0); lcd.print("Corrente: "); lcd.print(corrente);
   delay(300);
 }
