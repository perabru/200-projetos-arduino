// Projeto 090 - Par NRF24L01
// Arduino Uno | Arduino Neon Lab

#include <SPI.h>
 #include <RF24.h>

 RF24 radio(9,10); const byte addr[6]="00001";
 void setup(){ radio.begin(); radio.openWritingPipe(addr); radio.stopListening(); }
 void loop(){ const char texto[]="Ola"; radio.write(&texto,sizeof(texto)); delay(1000); }
