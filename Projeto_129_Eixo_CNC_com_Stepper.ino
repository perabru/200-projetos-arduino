// Projeto 129 - Eixo CNC com Stepper
// Arduino Uno | Arduino Neon Lab

#include <Stepper.h>
const int PASSOS=2048;
Stepper eixo(PASSOS,8,10,9,11);
void setup(){ eixo.setSpeed(12);Serial.begin(9600); }
void loop(){
 if(Serial.available()){
  long n=Serial.parseInt();
  if(n>=-4096 && n<=4096){ eixo.step(n); Serial.println("Concluido"); }
 }
}
