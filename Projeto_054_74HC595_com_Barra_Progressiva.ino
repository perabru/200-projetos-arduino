// Projeto 054 - 74HC595 com Barra Progressiva
// Arduino Uno | Arduino Neon Lab

const byte DADOS=11,CLOCK=12,LATCH=8;
void setup(){pinMode(DADOS,OUTPUT);pinMode(CLOCK,OUTPUT);pinMode(LATCH,OUTPUT);}
void loop(){
 for(byte n=0;n<=8;n++){
  byte mascara=(n==8)?255:((1<<n)-1);
  digitalWrite(LATCH,LOW);shiftOut(DADOS,CLOCK,MSBFIRST,mascara);
  digitalWrite(LATCH,HIGH);delay(320);
 }
}
