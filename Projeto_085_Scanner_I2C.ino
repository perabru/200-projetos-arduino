// Projeto 085 - Scanner I2C
// Arduino Uno | Arduino Neon Lab

#include <Wire.h>

 void setup(){ Wire.begin(); Serial.begin(9600); }
 void loop(){
   for(byte endereco=1; endereco<127; endereco++){
     Wire.beginTransmission(endereco);
     if(Wire.endTransmission()==0){ Serial.println(endereco, HEX); }
   }
   delay(3000);
 }
