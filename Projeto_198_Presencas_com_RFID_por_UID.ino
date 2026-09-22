// Projeto 198 - Presencas com RFID por UID
// Arduino Uno | Arduino Neon Lab

#include <SPI.h>
#include <MFRC522.h>
MFRC522 leitor(10,9);unsigned long total=0;
void setup(){Serial.begin(9600);SPI.begin();leitor.PCD_Init();}
void loop(){
 if(!leitor.PICC_IsNewCardPresent()||!leitor.PICC_ReadCardSerial())return;
 total++;Serial.print("Leitura ");Serial.print(total);Serial.print(": ");
 for(byte i=0;i<leitor.uid.size;i++){
  if(leitor.uid.uidByte[i]<16)Serial.print('0');
  Serial.print(leitor.uid.uidByte[i],HEX);Serial.print(' ');
 }
 Serial.println();leitor.PICC_HaltA();delay(250);
}
