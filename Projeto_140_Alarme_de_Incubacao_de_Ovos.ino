// Projeto 140 - Alarme de Incubação de Ovos
// Arduino Uno | Arduino Neon Lab

#include <DHT.h>
DHT dht(2,DHT11);
const byte LED=9,BZ=8;
void setup(){dht.begin();pinMode(LED,OUTPUT);}
void loop(){
 float t=dht.readTemperature();
 bool alerta=isnan(t)||t<36||t>38;
 digitalWrite(LED,alerta);
 if(alerta)tone(BZ,1000,200);else noTone(BZ);
 delay(2000);
}
