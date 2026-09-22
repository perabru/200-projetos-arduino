// Projeto 189 - Menu LCD por botao
// Arduino Uno | Arduino Neon Lab

#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,16,2);
const byte BTN=2;byte tela=0;bool ant=HIGH;
void setup(){pinMode(BTN,INPUT_PULLUP);lcd.init();lcd.backlight();}
void loop(){
 bool atual=digitalRead(BTN);
 if(ant==HIGH && atual==LOW){tela=(tela+1)%3;lcd.clear();}
 ant=atual;lcd.setCursor(0,0);
 if(tela==0)lcd.print("Arduino Neon");
 if(tela==1){lcd.print("Tempo(ms):");lcd.setCursor(0,1);lcd.print(millis());}
 if(tela==2){lcd.print("Luz A0: ");lcd.print(analogRead(A0));}
 delay(100);
}
