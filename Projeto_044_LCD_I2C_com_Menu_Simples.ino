// Projeto 044 - LCD I2C com Menu Simples
// Arduino Uno | Arduino Neon Lab

#include <Wire.h>
 #include <LiquidCrystal_I2C.h>

 LiquidCrystal_I2C lcd(0x27,16,2); int pagina=0, ultimo=HIGH;
 void setup(){ lcd.init(); lcd.backlight(); pinMode(2,INPUT_PULLUP); }
 void loop(){
   int clk=digitalRead(2); if(clk!=ultimo && clk==LOW) pagina=(pagina+1)%3; ultimo=clk;
   lcd.clear(); lcd.print(pagina==0?"Sensor":"Config"); delay(250);
 }
