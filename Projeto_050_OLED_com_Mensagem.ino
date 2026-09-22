// Projeto 050 - OLED com Mensagem
// Arduino Uno | Arduino Neon Lab

#include <Wire.h>
 #include <Adafruit_GFX.h>
 #include <Adafruit_SSD1306.h>

 Adafruit_SSD1306 display(128,64,&Wire,-1);
 void setup(){ display.begin(SSD1306_SWITCHCAPVCC,0x3C); }
 void loop(){
   display.clearDisplay(); display.setTextSize(2); display.setCursor(0,20); display.
 println("Arduino"); display.display(); delay(1000);
 }
