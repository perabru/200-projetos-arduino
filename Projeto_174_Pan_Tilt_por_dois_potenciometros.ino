// Projeto 174 - Pan Tilt por dois potenciometros
// Arduino Uno | Arduino Neon Lab

#include <Servo.h>
Servo pan,tilt;
void setup(){pan.attach(5);tilt.attach(6);}
void loop(){
 pan.write(map(analogRead(A0),0,1023,0,180));
 tilt.write(map(analogRead(A1),0,1023,20,160));
 delay(25);
}
