// Projeto 083 - Bluetooth Controlando LEDs
// Arduino Uno | Arduino Neon Lab

#include <SoftwareSerial.h>

 SoftwareSerial BT(10,11); int led=9;
 void setup(){ BT.begin(9600); pinMode(led,OUTPUT); }
 void loop(){
   if(BT.available()){
     char c=BT.read();
     if(c=='1') digitalWrite(led,HIGH);
     if(c=='0') digitalWrite(led,LOW);
   }
 }
