// Projeto 028 - Alarme de Chama
// Arduino Uno | Arduino Neon Lab

int sensor=2,bz=8,led=9;
 void setup(){ pinMode(sensor,INPUT); pinMode(led,OUTPUT); }
 void loop(){
   bool alarme = digitalRead(sensor)==LOW;
   digitalWrite(led, alarme);
   if(alarme) tone(bz,1200); else noTone(bz);
 }
