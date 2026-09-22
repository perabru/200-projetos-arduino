// Projeto 081 - Menu OLED com Controle IR
// Arduino Uno | Arduino Neon Lab

#include <IRremote.h>
 #include <Wire.h>
 #include <Adafruit_GFX.h>
 #include <Adafruit_SSD1306.h>

 Adafruit_SSD1306 display(128,64,&Wire,-1);
 void setup(){ IrReceiver.begin(11, ENABLE_LED_FEEDBACK); display.begin(
 SSD1306_SWITCHCAPVCC,0x3C); }
 void loop(){ if(IrReceiver.decode()){ display.clearDisplay(); display.setCursor(0,0);
 display.print(IrReceiver.decodedIRData.decodedRawData, HEX); display.display();
 IrReceiver.resume(); } }
