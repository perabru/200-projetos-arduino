// Projeto 114 - Luminária Inteligente
// Arduino Uno | Arduino Neon Lab

int ldr=A0,pir=2,rele=7;
 void setup(){ pinMode(pir,INPUT); pinMode(rele,OUTPUT); }
 void loop(){
   bool escuro = analogRead(ldr)<500;
   bool movimento = digitalRead(pir);
   digitalWrite(rele, escuro && movimento);
   delay(100);
 }
