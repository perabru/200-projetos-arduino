// Projeto 047 - Relógio com TM1637
// Arduino Uno | Arduino Neon Lab

#include <TM1637Display.h>

 TM1637Display display(2,3);
 void setup(){ display.setBrightness(7); }
 void loop(){
   int valor = (millis()/1000)%10000;
   display.showNumberDec(valor, true);
   delay(250);
 }
