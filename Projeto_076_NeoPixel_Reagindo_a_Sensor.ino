// Projeto 076 - NeoPixel Reagindo a Sensor
// Arduino Uno | Arduino Neon Lab

#include <Adafruit_NeoPixel.h>

 Adafruit_NeoPixel strip(8,6,NEO_GRB+NEO_KHZ800);
 void setup(){ strip.begin(); }
 void loop(){
   int valor = map(analogRead(A0),0,1023,0,8);
   for(int i=0;i<8;i++) strip.setPixelColor(i, i<valor ? strip.Color(80,0,255) : 0);
   strip.show(); delay(100);
 }
