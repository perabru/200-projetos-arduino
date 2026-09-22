// Projeto 048 - Matriz 8x8 com Carinha
// Arduino Uno | Arduino Neon Lab

#include <LedControl.h>

 LedControl lc=LedControl(11,13,10,1);
 byte smile[8]={0x3C,0x42,0xA5,0x81,0xA5,0x99,0x42,0x3C};
 void setup(){ lc.shutdown(0,false); lc.setIntensity(0,8); lc.clearDisplay(0); }
 void loop(){ for(int i=0;i<8;i++) lc.setRow(0,i,smile[i]); delay(1000); }
