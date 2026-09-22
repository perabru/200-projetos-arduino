// Projeto 120 - Detector de Cor TCS34725
// Arduino Uno | Arduino Neon Lab

#include <Wire.h>
 #include "Adafruit_TCS34725.h"

 Adafruit_TCS34725 tcs = Adafruit_TCS34725();
 void setup(){ Serial.begin(9600); tcs.begin(); }
 void loop(){ uint16_t r,g,b,c; tcs.getRawData(&r,&g,&b,&c); Serial.print(r); Serial.
 print(','); Serial.print(g); Serial.print(','); Serial.println(b); delay(400); }
