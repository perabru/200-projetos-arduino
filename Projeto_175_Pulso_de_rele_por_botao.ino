// Projeto 175 - Pulso de rele por botao
// Arduino Uno | Arduino Neon Lab

const byte BTN=2,RELE=7;const bool ATIVO=LOW;
unsigned long ate=0;bool ant=HIGH;
void setup(){pinMode(BTN,INPUT_PULLUP);pinMode(RELE,OUTPUT);
 digitalWrite(RELE,!ATIVO);}
void loop(){
 bool agora=digitalRead(BTN);
 if(ant==HIGH && agora==LOW)ate=millis()+250UL;
 ant=agora;
 digitalWrite(RELE,(long)(ate-millis())>0?ATIVO:!ATIVO);
 delay(20);
}
