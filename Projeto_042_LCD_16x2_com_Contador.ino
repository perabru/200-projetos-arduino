// Projeto 042 - LCD 16x2 com Contador
// Arduino Uno | Arduino Neon Lab

#include <Wire.h>
 #include <LiquidCrystal_I2C.h>

 LiquidCrystal_I2C lcd(0x27,16,2); int botao=2, cont=0;
 void setup(){ lcd.init(); lcd.backlight(); pinMode(botao,INPUT_PULLUP); }
 void loop(){
   if(digitalRead(botao)==LOW){ cont++; lcd.clear(); lcd.print("Contador: "); lcd.print(
 cont); delay(250); }
 }
