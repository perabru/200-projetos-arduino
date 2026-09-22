// Projeto 191 - Estufa: temperatura fora da faixa
// Arduino Uno | Arduino Neon Lab

#include <DHT.h>
DHT dht(2,DHT11);
void setup(){dht.begin();pinMode(8,OUTPUT);pinMode(9,OUTPUT);}
void loop(){
 float t=dht.readTemperature();
 if(!isnan(t)){
  digitalWrite(8,t<20);digitalWrite(9,t>30);
 }
 delay(2000);
}
