#include <SPI.h>
#include <RF24.h>
RF24 radio(9,10);const byte addr[6]="00001";
void setup(){Serial.begin(9600);radio.begin();
 radio.openReadingPipe(1,addr);radio.startListening();}
void loop(){
 if(radio.available()){
  char texto[32]={0};radio.read(&texto,sizeof(texto));
  Serial.println(texto);
 }
}
