#include <Wire.h>
const byte LED=9;
void receber(int n){ if(Wire.available())digitalWrite(LED,Wire.read()!=0);
 while(Wire.available())Wire.read(); }
void setup(){pinMode(LED,OUTPUT);Wire.begin(8);Wire.onReceive(receber);}
void loop(){}
