// Projeto 122 - Rastreador Solar com 2 LDRs
// Arduino Uno | Arduino Neon Lab

#include <Servo.h>

 Servo s; int ang=90;
 void setup(){ s.attach(5); }
 void loop(){
   int l=analogRead(A0), r=analogRead(A1);
   if(l-r>30) ang++; else if(r-l>30) ang--;
   ang=constrain(ang,10,170); s.write(ang); delay(40);
 }
