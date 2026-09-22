// Projeto 158 - Cronometro de tres botoes
// Arduino Uno | Arduino Neon Lab

const byte INICIO=2,FIM=3,ZERAR=4;
unsigned long inicio=0,tempo=0;bool rodando=false;
void setup(){for(byte p:{INICIO,FIM,ZERAR})pinMode(p,INPUT_PULLUP);
 Serial.begin(9600);}
void loop(){
 if(!digitalRead(INICIO) && !rodando){inicio=millis();rodando=true;delay(180);}
 if(!digitalRead(FIM) && rodando){tempo=millis()-inicio;
  rodando=false;Serial.println(tempo);delay(180);}
 if(!digitalRead(ZERAR)){tempo=0;rodando=false;Serial.println(0);delay(180);}
}
