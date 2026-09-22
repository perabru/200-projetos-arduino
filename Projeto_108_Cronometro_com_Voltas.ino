// Projeto 108 - Cronômetro com Voltas
// Arduino Uno | Arduino Neon Lab

#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,16,2);
const byte INICIO=2,VOLTA=3;bool ativo=false,a=HIGH,v=HIGH;
unsigned long inicio=0,acumulado=0;
void setup(){pinMode(INICIO,INPUT_PULLUP);pinMode(VOLTA,INPUT_PULLUP);
 lcd.init();lcd.backlight();}
void loop(){
 bool x=digitalRead(INICIO),y=digitalRead(VOLTA);
 if(a==HIGH&&x==LOW){
  if(ativo)acumulado+=millis()-inicio;else inicio=millis();
  ativo=!ativo;
 }
 unsigned long t=acumulado+(ativo?millis()-inicio:0);
 if(v==HIGH&&y==LOW){lcd.setCursor(0,1);lcd.print("Volta: ");lcd.print(t/1000.0,2);}
 lcd.setCursor(0,0);lcd.print("Tempo: ");lcd.print(t/1000.0,2);lcd.print(" ");
 a=x;v=y;delay(45);
}
