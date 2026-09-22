// Projeto 026 - Temperatura com DS18B20
// Arduino Uno | Arduino Neon Lab

#include <OneWire.h>
 #include <DallasTemperature.h>

 OneWire oneWire(2); DallasTemperature sensor(&oneWire);
 void setup(){ Serial.begin(9600); sensor.begin(); }
 void loop(){
   sensor.requestTemperatures();
   Serial.println(sensor.getTempCByIndex(0));
   delay(1000);
 }
