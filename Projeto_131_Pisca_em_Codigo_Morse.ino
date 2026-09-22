// Projeto 131 - Pisca em Código Morse
// Arduino Uno | Arduino Neon Lab

int led=9,bz=8;
 void pulse(int t){ digitalWrite(led,1); tone(bz,900); delay(t); digitalWrite(led,0);
 noTone(bz); delay(150); }
 void setup(){ pinMode(led,OUTPUT); }
 void loop(){
   // SOS
   pulse(150); pulse(150); pulse(150);
   pulse(450); pulse(450); pulse(450);
   pulse(150); pulse(150); pulse(150);
   delay(1500);
 }
