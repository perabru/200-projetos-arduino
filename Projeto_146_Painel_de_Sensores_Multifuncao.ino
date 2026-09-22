// Projeto 146 - Painel de Sensores Multifunção
// Arduino Uno | Arduino Neon Lab

#include <DHT.h>
 #include <Wire.h>
 #include <Adafruit_GFX.h>
 #include <Adafruit_SSD1306.h>

 Adafruit_SSD1306 display(128,64,&Wire,-1); DHT dht(2,DHT11);
 void setup(){ dht.begin(); display.begin(SSD1306_SWITCHCAPVCC,0x3C); }
 void loop(){
   display.clearDisplay(); display.setCursor(0,0);
   display.print("T:"); display.println(dht.readTemperature());
   display.print("Luz:"); display.println(analogRead(A0));
   display.print("Solo:"); display.println(analogRead(A1));
   display.display(); delay(1000);
 }
