// Projeto 062 - Servo por Potenciômetro
// Arduino Uno | Arduino Neon Lab

#include <Servo.h>

 Servo s;
 void setup(){ s.attach(5); }
 void loop(){ int a=map(analogRead(A0),0,1023,0,180); s.write(a); delay(15); }
