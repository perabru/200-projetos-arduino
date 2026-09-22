// Projeto 064 - Pan-Tilt com 2 Servos
// Arduino Uno | Arduino Neon Lab

#include <Servo.h>

 Servo pan, tilt; int ang=0;
 void setup(){ pan.attach(5); tilt.attach(6); }
 void loop(){ for(ang=30; ang<=150; ang+=2){ pan.write(ang); tilt.write(180-ang); delay(
 20); } }
