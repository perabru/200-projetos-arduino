// Projeto 121 - Mini Incubadora com Alarme
// Arduino Uno | Arduino Neon Lab

#include <DHT.h>

 DHT dht(2,DHT11); int rele=7,bz=8;
 void setup(){ dht.begin(); pinMode(rele,OUTPUT); }
 void loop(){
   float t = dht.readTemperature();
   if(t < 36 || t > 38){ digitalWrite(rele,HIGH); tone(bz,1000,200); }
   else { digitalWrite(rele,LOW); noTone(bz); }
   delay(1500);
 }
