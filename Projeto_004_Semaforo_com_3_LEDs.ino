// Projeto 004 - Semáforo com 3 LEDs
// Arduino Uno | Arduino Neon Lab

int verde=8, amarelo=9, vermelho=10;
 void setup(){
   pinMode(verde, OUTPUT); pinMode(amarelo, OUTPUT); pinMode(vermelho, OUTPUT);
 }
 void loop(){
   digitalWrite(verde,HIGH); digitalWrite(amarelo,LOW); digitalWrite(vermelho,LOW);
 delay(3000);
   digitalWrite(verde,LOW); digitalWrite(amarelo,HIGH); delay(1000);
   digitalWrite(amarelo,LOW); digitalWrite(vermelho,HIGH); delay(3000);
 }
