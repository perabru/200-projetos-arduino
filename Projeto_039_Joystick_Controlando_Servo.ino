// Projeto 039 - Joystick Controlando Servo
// Arduino Uno | Arduino Neon Lab

#include <Servo.h>
 Servo s;
 void setup(){ s.attach(5); }
 void loop(){
   int x = analogRead(A0);
   int ang = map(x,0,1023,0,180);
   s.write(ang);
   delay(15);
 }
