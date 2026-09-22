// Projeto 061 - Servo Sweep Automático
// Arduino Uno | Arduino Neon Lab

#include <Servo.h>

 Servo s;
 void setup(){ s.attach(5); }
 void loop(){ for(int a=0;a<=180;a++){ s.write(a); delay(15); } for(int a=180;a>=0;a--){
 s.write(a); delay(15); } }
