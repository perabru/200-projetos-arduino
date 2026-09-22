// Projeto 078 - Faixa de Pedestres com Buzzer
// Arduino Uno | Arduino Neon Lab

int btn=2, g=8, y=9, r=10, bz=7;
 void setup(){ pinMode(btn,INPUT_PULLUP); pinMode(g,OUTPUT); pinMode(y,OUTPUT); pinMode(
 r,OUTPUT); }
 void loop(){
   digitalWrite(g,HIGH);
   if(!digitalRead(btn)){
     digitalWrite(g,LOW); digitalWrite(y,HIGH); delay(1000); digitalWrite(y,LOW);
 digitalWrite(r,HIGH);
     for(int i=0;i<10;i++){ tone(bz,1000,100); delay(400); }
     digitalWrite(r,LOW);
   }
 }
