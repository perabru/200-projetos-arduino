// Projeto 096 - Contador de Presenças RFID
// Arduino Uno | Arduino Neon Lab

#include <SPI.h>
#include <MFRC522.h>
MFRC522 rfid(10,9);
unsigned long pessoas=0;
void setup(){Serial.begin(9600);SPI.begin();rfid.PCD_Init();}
void loop(){
 if(!rfid.PICC_IsNewCardPresent()||!rfid.PICC_ReadCardSerial())return;
 pessoas++;Serial.print("Leituras: ");Serial.println(pessoas);
 rfid.PICC_HaltA();rfid.PCD_StopCrypto1();delay(300);
}
