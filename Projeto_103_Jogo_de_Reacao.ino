// Projeto 103 - Jogo de Reação
// Arduino Uno | Arduino Neon Lab

const byte LED=9,BTN=2;
void setup(){ pinMode(LED,OUTPUT); pinMode(BTN,INPUT_PULLUP);
  Serial.begin(9600); randomSeed(analogRead(A0)); }
void loop(){
  digitalWrite(LED,LOW);
  while(digitalRead(BTN)==LOW) delay(10);
  unsigned long espera=random(2000,5000), inicio=millis();
  while(millis()-inicio<espera){
    if(digitalRead(BTN)==LOW){ Serial.println("Queimou a largada"); delay(750); return; }
  }
  digitalWrite(LED,HIGH); inicio=millis();
  while(digitalRead(BTN)==HIGH && millis()-inicio<5000UL){}
  if(digitalRead(BTN)==LOW) Serial.println(millis()-inicio);
  else Serial.println("Tempo esgotado");
  digitalWrite(LED,LOW); delay(800);
}
