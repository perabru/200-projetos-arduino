// Projeto 157 - Alarme de porta com atraso
// Arduino Uno | Arduino Neon Lab

const byte PORTA=2,BZ=8;
unsigned long abriu=0;
void setup(){pinMode(PORTA,INPUT_PULLUP);}
void loop(){
 bool aberta=digitalRead(PORTA)==HIGH;
 if(aberta && abriu==0) abriu=millis();
 if(!aberta) abriu=0;
 if(aberta && millis()-abriu>3000) tone(BZ,1000);
 else noTone(BZ);
}
