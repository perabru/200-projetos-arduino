// Projeto 082 - Bluetooth HC-05 com Serial
// Arduino Uno | Arduino Neon Lab

#include <SoftwareSerial.h>

 SoftwareSerial BT(10,11);
 void setup(){ Serial.begin(9600); BT.begin(9600); }
 void loop(){
   if(BT.available()) Serial.write(BT.read());
   if(Serial.available()) BT.write(Serial.read());
 }
