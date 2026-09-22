// Projeto 183 - Telemetria JSON com DHT11
// Arduino Uno | Arduino Neon Lab

#include <DHT.h>
DHT dht(2,DHT11);
void setup(){Serial.begin(9600);dht.begin();}
void loop(){
 float t=dht.readTemperature(),u=dht.readHumidity();
 if(!isnan(t)&&!isnan(u)){
  Serial.print("{\"temp\":");Serial.print(t,1);
  Serial.print(",\"umidade\":");Serial.print(u,1);
  Serial.println("}");
 }
 delay(2000);
}
