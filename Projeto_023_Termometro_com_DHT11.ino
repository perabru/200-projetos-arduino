// Projeto 023 - Termômetro com DHT11
// Arduino Uno | Arduino Neon Lab

#include <DHT.h>

 #define PINO 2
 DHT dht(PINO, DHT11);
 void setup(){ Serial.begin(9600); dht.begin(); }
 void loop(){
   float t = dht.readTemperature();
   float u = dht.readHumidity();
   Serial.print("T="); Serial.print(t); Serial.print(" C  U="); Serial.println(u);
   delay(1500);
 }
