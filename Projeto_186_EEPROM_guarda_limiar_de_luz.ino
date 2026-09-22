// Projeto 186 - EEPROM guarda limiar de luz
// Arduino Uno | Arduino Neon Lab

#include <EEPROM.h>
const byte BTN=2,LED=9;
int limiar=500;bool ant=HIGH;
void setup(){pinMode(BTN,INPUT_PULLUP);pinMode(LED,OUTPUT);
 EEPROM.get(0,limiar);if(limiar<0||limiar>1023)limiar=500;}
void loop(){
 bool atual=digitalRead(BTN);
 if(ant==HIGH && atual==LOW){limiar=analogRead(A1);EEPROM.put(0,limiar);}
 ant=atual;digitalWrite(LED,analogRead(A0)<limiar);delay(50);
}
