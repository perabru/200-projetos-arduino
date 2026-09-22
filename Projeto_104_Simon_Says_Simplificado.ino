// Projeto 104 - Simon Says Simplificado
// Arduino Uno | Arduino Neon Lab

const byte LEDS[]={6,7,8,9}, BOTOES[]={2,3,4,5};
byte sequencia[12]; byte rodada=1;
void mostrar(byte n){ digitalWrite(LEDS[n],HIGH);delay(420);
  digitalWrite(LEDS[n],LOW);delay(200); }
void setup(){ for(byte i=0;i<4;i++){
  pinMode(LEDS[i],OUTPUT);pinMode(BOTOES[i],INPUT_PULLUP); }
  randomSeed(analogRead(A0)); sequencia[0]=random(4); }
void loop(){
  for(byte i=0;i<rodada;i++) mostrar(sequencia[i]);
  for(byte i=0;i<rodada;i++){
    byte escolha=255;
    while(escolha==255){ for(byte b=0;b<4;b++)
      if(digitalRead(BOTOES[b])==LOW) escolha=b; }
    while(digitalRead(BOTOES[escolha])==LOW) delay(10);
    if(escolha!=sequencia[i]){ rodada=1; sequencia[0]=random(4);delay(800);return; }
  }
  if(rodada<12) sequencia[rodada++]=random(4);
  else rodada=1;
  delay(600);
}
