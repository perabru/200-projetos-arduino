// Projeto 190 - Grafico de LDR no OLED
// Arduino Uno | Arduino Neon Lab

#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
Adafruit_SSD1306 tela(128,64,&Wire,-1);
byte x=0;
void setup(){tela.begin(SSD1306_SWITCHCAPVCC,0x3C);
 tela.clearDisplay();tela.display();}
void loop(){
 int v=analogRead(A0);byte h=map(v,0,1023,0,63);
 if(x==0)tela.clearDisplay();
 tela.drawFastVLine(x,63-h,h,SSD1306_WHITE);
 tela.display();x=(x+1)%128;delay(80);
}
