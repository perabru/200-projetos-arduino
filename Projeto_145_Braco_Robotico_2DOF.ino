// Projeto 145 - Braço Robótico 2DOF
// Arduino Uno | Arduino Neon Lab

#include <Servo.h>

 Servo base, braco;
 void setup(){ base.attach(5); braco.attach(6); }
 void loop(){
   base.write(map(analogRead(A0),0,1023,0,180));
   braco.write(map(analogRead(A1),0,1023,0,180));
   delay(15);
 }
