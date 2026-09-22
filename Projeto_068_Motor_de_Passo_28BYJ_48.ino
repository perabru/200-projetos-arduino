// Projeto 068 - Motor de Passo 28BYJ-48
// Arduino Uno | Arduino Neon Lab

#include <Stepper.h>

 const int passos=2048; Stepper motor(passos,8,10,9,11);
 void setup(){ motor.setSpeed(10); }
 void loop(){ motor.step(passos); delay(500); motor.step(-passos); delay(500); }
