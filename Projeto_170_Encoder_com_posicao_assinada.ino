// Projeto 170 - Encoder com posicao assinada
// Arduino Uno | Arduino Neon Lab

const byte CLK=2,DT=3;long posicao=0;bool ant;
void setup(){pinMode(CLK,INPUT_PULLUP);pinMode(DT,INPUT_PULLUP);
 ant=digitalRead(CLK);Serial.begin(9600);}
void loop(){
 bool agora=digitalRead(CLK);
 if(agora!=ant && agora==LOW){
  posicao+=(digitalRead(DT)!=agora)?1:-1;
  Serial.println(posicao);
 }
 ant=agora;
}
