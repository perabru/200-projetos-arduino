// Projeto 043 - LCD 16x2 com Temperatura
// Arduino Uno | Arduino Neon Lab

#include <Wire.h>
 #include <LiquidCrystal_I2C.h>

 LiquidCrystal_I2C lcd(0x27,16,2);
 void setup(){ lcd.init(); lcd.backlight(); }
 void loop(){
   float t = analogRead(A0) * 5.0 / 1023.0 * 100.0;
   lcd.setCursor(0,0); lcd.print("Temp:      "); lcd.setCursor(6,0); lcd.print(t);
   delay(500);
 }
