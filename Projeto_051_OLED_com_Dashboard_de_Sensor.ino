// Projeto 051 - OLED com Dashboard de Sensor
// Arduino Uno | Arduino Neon Lab

#include <Wire.h>
 #include <Adafruit_GFX.h>
 #include <Adafruit_SSD1306.h>
 #include <DHT.h>

 Adafruit_SSD1306 display(128,64,&Wire,-1); DHT dht(2,DHT11);
 void setup(){ dht.begin(); display.begin(SSD1306_SWITCHCAPVCC,0x3C); }
 void loop(){
   display.clearDisplay(); display.setTextSize(1); display.setCursor(0,0);
   display.print("Temp: "); display.println(dht.readTemperature());
   display.print("Umid: "); display.println(dht.readHumidity());
   display.display(); delay(1500);
 }
