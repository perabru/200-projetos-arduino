// Projeto 107 - Cronômetro Simples
// Arduino Uno | Arduino Neon Lab

#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,16,2);
const byte BTN=2;unsigned long inicio=0,acumulado=0;
bool ativo=false,ant=HIGH;
void setup(){pinMode(BTN,INPUT_PULLUP);lcd.init();lcd.backlight();}
void loop(){
 bool agora=digitalRead(BTN);
 if(ant==HIGH && agora==LOW){
  if(ativo)acumulado+=millis()-inicio;
  else inicio=millis();
  ativo=!ativo;delay(40);
 }
 ant=agora;
 unsigned long t=acumulado+(ativo?millis()-inicio:0);
 lcd.setCursor(0,0);lcd.print("Tempo ms:       ");
 lcd.setCursor(0,1);lcd.print(t);lcd.print("       ");
 delay(50);
}
