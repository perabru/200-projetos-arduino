// Projeto 092 - GPS com Coordenadas no LCD
// Arduino Uno | Arduino Neon Lab

#include <TinyGPS++.h>
#include <SoftwareSerial.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>
TinyGPSPlus gps;
SoftwareSerial portaGPS(4,3); // RX Arduino <- TX GPS
LiquidCrystal_I2C lcd(0x27,16,2);
void setup(){ portaGPS.begin(9600); lcd.init(); lcd.backlight(); }
void loop(){
  while(portaGPS.available()) gps.encode(portaGPS.read());
  if(gps.location.isUpdated()){
    lcd.clear(); lcd.setCursor(0,0); lcd.print(gps.location.lat(),4);
    lcd.setCursor(0,1); lcd.print(gps.location.lng(),4);
  }
}
