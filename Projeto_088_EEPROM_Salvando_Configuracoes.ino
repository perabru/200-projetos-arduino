// Projeto 088 - EEPROM Salvando Configurações
// Arduino Uno | Arduino Neon Lab

#include <EEPROM.h>

 int led=9, botao=2, estado;
 void setup(){ pinMode(led,OUTPUT); pinMode(botao,INPUT_PULLUP); estado = EEPROM.read(0);
  digitalWrite(led,estado); }
 void loop(){
   if(!digitalRead(botao)){
     estado=!estado; digitalWrite(led,estado); EEPROM.write(0,estado); delay(250);
   }
 }
