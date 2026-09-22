// Projeto 150 - Estufa Inteligente Integrada
// Arduino Uno | Arduino Neon Lab

#include <DHT.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
DHT dht(2,DHT11);
Adafruit_SSD1306 oled(128,64,&Wire,-1);
const byte SOLO=A0,RELE=7;
const bool ATIVO=LOW;
void setup(){ dht.begin();pinMode(RELE,OUTPUT);digitalWrite(RELE,!ATIVO);
 oled.begin(SSD1306_SWITCHCAPVCC,0x3C);oled.setTextSize(1);
 oled.setTextColor(SSD1306_WHITE); }
void loop(){
 int leitura=analogRead(SOLO);float t=dht.readTemperature();
 bool irrigar=leitura>650;
 digitalWrite(RELE,irrigar?ATIVO:!ATIVO);
 oled.clearDisplay();oled.setCursor(0,0);
 oled.print("Temp: ");if(isnan(t))oled.println("falha");else oled.println(t);
 oled.print("Solo: ");oled.println(leitura);
 oled.print("Bomba: ");oled.println(irrigar?"ON":"OFF");oled.display();
 delay(1500);
}
