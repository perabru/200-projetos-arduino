// Projeto 049 - Animacao rolante na matriz 8x8
// Arduino Uno | Arduino Neon Lab

#include <LedControl.h>
LedControl m(11,13,10,1);
const byte colunas[]={0b00000000,0b00111100,0b01000010,0b10000001,
                      0b10000001,0b01000010,0b00111100,0b00000000};
void setup(){ m.shutdown(0,false); m.setIntensity(0,4); m.clearDisplay(0); }
void loop(){
  for(byte desloc=0;desloc<8;desloc++){
    for(byte r=0;r<8;r++) m.setRow(0,r,colunas[(r+desloc)%8]);
    delay(180);
  }
}
