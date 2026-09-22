// Projeto 087 - Logger com Cartão SD
// Arduino Uno | Arduino Neon Lab

#include <SPI.h>
 #include <SD.h>

 File arquivo;
 void setup(){ Serial.begin(9600); SD.begin(10); }
 void loop(){
   float t = analogRead(A0)*5.0/1023.0*100.0;
   arquivo = SD.open("dados.txt", FILE_WRITE);
   if(arquivo){ arquivo.println(t); arquivo.close(); }
   delay(2000);
 }
