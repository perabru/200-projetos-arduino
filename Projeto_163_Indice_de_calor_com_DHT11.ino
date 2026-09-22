// Projeto 163 - Indice de calor com DHT11
// Arduino Uno | Arduino Neon Lab

#include <DHT.h>
DHT dht(2,DHT11);
void setup(){Serial.begin(9600);dht.begin();}
void loop(){
 float t=dht.readTemperature(),h=dht.readHumidity();
 if(isnan(t)||isnan(h)){Serial.println("Falha DHT");delay(2000);return;}
 float indice=dht.computeHeatIndex(t,h,false);
 Serial.print("T=");Serial.print(t);
 Serial.print(" UR=");Serial.print(h);
 Serial.print(" IC=");Serial.println(indice);delay(2000);
}
