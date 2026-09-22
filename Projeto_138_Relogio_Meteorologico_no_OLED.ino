// Projeto 138 - Relógio Meteorológico no OLED
// Arduino Uno | Arduino Neon Lab

#include <Wire.h>
#include <RTClib.h>
#include <DHT.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
RTC_DS3231 rtc;DHT dht(2,DHT11);
Adafruit_SSD1306 oled(128,64,&Wire,-1);
void setup(){rtc.begin();dht.begin();oled.begin(SSD1306_SWITCHCAPVCC,0x3C);
 oled.setTextSize(1);oled.setTextColor(SSD1306_WHITE);}
void loop(){
 DateTime a=rtc.now();float t=dht.readTemperature();
 oled.clearDisplay();oled.setCursor(0,0);
 oled.print(a.hour());oled.print(':');oled.println(a.minute());
 oled.print("Temp: ");if(isnan(t))oled.println("falha");else oled.println(t);
 oled.display();delay(1500);
}
