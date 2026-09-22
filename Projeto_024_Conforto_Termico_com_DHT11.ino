// Projeto 024 - Conforto Térmico com DHT11
// Arduino Uno | Arduino Neon Lab

#include <DHT.h>

 DHT dht(2, DHT11);
 int verde=8, amarelo=9, vermelho=10;
 void setup(){ dht.begin(); pinMode(verde,OUTPUT); pinMode(amarelo,OUTPUT); pinMode(
 vermelho,OUTPUT); }
 void loop(){
   float t=dht.readTemperature();
   digitalWrite(verde, t>=22 && t<=27);
   digitalWrite(amarelo, t>27 && t<=30);
   digitalWrite(vermelho, t<22 || t>30);
   delay(1500);
 }
