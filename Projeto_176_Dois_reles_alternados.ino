// Projeto 176 - Dois reles alternados
// Arduino Uno | Arduino Neon Lab

const byte R1=6,R2=7;const bool ATIVO=LOW;
unsigned long ultima=0;bool fase=false;
void setup(){pinMode(R1,OUTPUT);pinMode(R2,OUTPUT);
 digitalWrite(R1,!ATIVO);digitalWrite(R2,!ATIVO);}
void loop(){
 if(millis()-ultima>=3000UL){ultima=millis();fase=!fase;}
 digitalWrite(R1,fase?ATIVO:!ATIVO);
 digitalWrite(R2,fase?!ATIVO:ATIVO);
}
