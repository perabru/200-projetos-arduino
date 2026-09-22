// Projeto 134 - Automação Residencial 4 Relés
// Arduino Uno | Arduino Neon Lab

int r1=4,r2=5,r3=6,r4=7;
 void setup(){ pinMode(r1,OUTPUT); pinMode(r2,OUTPUT); pinMode(r3,OUTPUT); pinMode(r4,
 OUTPUT); }
 void loop(){
   digitalWrite(r1,HIGH); delay(500); digitalWrite(r2,HIGH); delay(500);
   digitalWrite(r3,HIGH); delay(500); digitalWrite(r4,HIGH); delay(500);
   digitalWrite(r1,LOW); digitalWrite(r2,LOW); digitalWrite(r3,LOW); digitalWrite(r4,
 LOW); delay(1000);
 }
