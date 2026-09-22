// Projeto 155 - Duplo clique no botao
// Arduino Uno | Arduino Neon Lab

const byte BTN=2,LED=9;
unsigned long ultimo=0;byte cliques=0;bool ant=HIGH,aceso=false;
void setup(){pinMode(BTN,INPUT_PULLUP);pinMode(LED,OUTPUT);}
void loop(){
 bool atual=digitalRead(BTN);
 if(ant==HIGH && atual==LOW){
  if(millis()-ultimo<400) cliques++; else cliques=1;
  ultimo=millis();
  if(cliques>=2){aceso=!aceso;cliques=0;}
 }
 ant=atual;digitalWrite(LED,aceso);delay(35);
}
