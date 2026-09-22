// Projeto 075 - NeoPixel Rainbow
// Arduino Uno | Arduino Neon Lab

#include <Adafruit_NeoPixel.h>
Adafruit_NeoPixel fita(8,6,NEO_GRB+NEO_KHZ800);
void setup(){fita.begin();fita.setBrightness(45);fita.show();}
void loop(){
 for(uint16_t fase=0;fase<256;fase+=4){
  for(byte i=0;i<8;i++){
   uint16_t cor=(i*256/8+fase)&255;
   fita.setPixelColor(i,fita.gamma32(fita.ColorHSV(cor*256)));
  }
  fita.show();delay(40);
 }
}
