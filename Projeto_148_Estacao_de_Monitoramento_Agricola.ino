// Projeto 148 - Estação de Monitoramento Agrícola
// Arduino Uno | Arduino Neon Lab

#include <DHT.h>

 DHT dht(2,DHT11); int solo=A0, rele=7;
 void setup(){ dht.begin(); pinMode(rele,OUTPUT); Serial.begin(9600); }
 void loop(){
   float t = dht.readTemperature();
   int umidadeSolo = analogRead(solo);
   bool seco = umidadeSolo > 650;
   digitalWrite(rele, seco);
   Serial.print("Temp="); Serial.print(t); Serial.print(" Solo="); Serial.println(
 umidadeSolo);
   delay(1500);
 }
