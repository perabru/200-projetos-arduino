// Projeto 052 - Mini Jogo no OLED
// Arduino Uno | Arduino Neon Lab

#include <Wire.h>
 #include <Adafruit_GFX.h>
 #include <Adafruit_SSD1306.h>

 Adafruit_SSD1306 display(128,64,&Wire,-1); int x=60;
 void setup(){ pinMode(2,INPUT_PULLUP); pinMode(3,INPUT_PULLUP); display.begin(
 SSD1306_SWITCHCAPVCC,0x3C); }
 void loop(){
   if(!digitalRead(2)) x-=2; if(!digitalRead(3)) x+=2; x=constrain(x,0,120);
   display.clearDisplay(); display.fillRect(x,56,8,8,WHITE); display.display(); delay(
 30);
 }
