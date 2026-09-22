// Projeto 147 - Controle de acesso com RFID e servo
// Arduino Uno | Arduino Neon Lab

#include <SPI.h>
#include <MFRC522.h>
#include <Servo.h>
MFRC522 leitor(10,9);Servo trava;
// Substitua pelo UID da sua propria tag, lido no projeto 058.
const byte UID_OK[4]={0xDE,0xAD,0xBE,0xEF};
void setup(){SPI.begin();leitor.PCD_Init();trava.attach(8);trava.write(0);}
void loop(){
 if(!leitor.PICC_IsNewCardPresent() || !leitor.PICC_ReadCardSerial()) return;
 bool autorizado=leitor.uid.size==4;
 for(byte i=0;i<4 && autorizado;i++)
   if(leitor.uid.uidByte[i]!=UID_OK[i]) autorizado=false;
 if(autorizado){trava.write(90);delay(1500);trava.write(0);}
 leitor.PICC_HaltA();leitor.PCD_StopCrypto1();
}
