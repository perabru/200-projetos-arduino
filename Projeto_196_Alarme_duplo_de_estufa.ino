// Projeto 196 - Alarme duplo de estufa
// Arduino Uno | Arduino Neon Lab

#include <DHT.h>
DHT dht(2,DHT11);
void setup(){dht.begin();Serial.begin(9600);}
void loop(){
 float t=dht.readTemperature();int solo=analogRead(A0);
 bool alarme=(!isnan(t) && t>32) || solo>750;
 if(alarme)tone(8,1000);else noTone(8);
 Serial.print("T=");Serial.print(t);
 Serial.print(" Solo=");Serial.println(solo);delay(2000);
}
