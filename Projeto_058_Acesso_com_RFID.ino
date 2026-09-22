// Projeto 058 - Acesso com RFID
// Arduino Uno | Arduino Neon Lab

#include <SPI.h>
 #include <MFRC522.h>

 MFRC522 rfid(10,9);
 void setup(){ Serial.begin(9600); SPI.begin(); rfid.PCD_Init(); }
 void loop(){
   if(!rfid.PICC_IsNewCardPresent() || !rfid.PICC_ReadCardSerial()) return;
   for(byte i=0;i<rfid.uid.size;i++){ Serial.print(rfid.uid.uidByte[i], HEX); Serial.
 print(' '); }
   Serial.println();
 }
