// Projeto 142 - Relé com Clap Switch
// Arduino Uno | Arduino Neon Lab

const byte SOM=2,RELE=7;
const bool ATIVO=LOW;
bool ligado=false,ant=HIGH;
unsigned long ultima=0;
void setup(){pinMode(SOM,INPUT_PULLUP);pinMode(RELE,OUTPUT);
 digitalWrite(RELE,!ATIVO);}
void loop(){
 bool agora=digitalRead(SOM);
 if(ant==HIGH && agora==LOW && millis()-ultima>350){
  ligado=!ligado;ultima=millis();
 }
 ant=agora;digitalWrite(RELE,ligado?ATIVO:!ATIVO);
}
