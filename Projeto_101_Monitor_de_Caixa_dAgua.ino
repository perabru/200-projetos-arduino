// Projeto 101 - Monitor de Caixa d’Água
// Arduino Uno | Arduino Neon Lab

#include <Wire.h>
 #include <LiquidCrystal_I2C.h>
 LiquidCrystal_I2C lcd(0x27,16,2);
 int trig=9, echo=10;
 long medir(){ digitalWrite(trig,LOW); delayMicroseconds(2); digitalWrite(trig,HIGH);
 delayMicroseconds(10); digitalWrite(trig,LOW); return pulseIn(echo,HIGH)*0.034/2; }
 void setup(){ lcd.init(); lcd.backlight(); pinMode(trig,OUTPUT); pinMode(echo,INPUT); }
 void loop(){
   long cm = medir(); lcd.setCursor(0,0); lcd.print("Nivel:      "); lcd.setCursor(7,0);
 lcd.print(cm);
   delay(300);
 }
