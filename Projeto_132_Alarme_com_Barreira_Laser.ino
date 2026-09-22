// Projeto 132 - Alarme com Barreira Laser
// Arduino Uno | Arduino Neon Lab

int ldr=A0,bz=8;
 void setup(){ Serial.begin(9600); }
 void loop(){
   int valor=analogRead(ldr);
   if(valor<300) tone(bz,1200); else noTone(bz);
   delay(40);
 }
