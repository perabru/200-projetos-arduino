// Projeto 192 - Irrigacao com servo e solo
// Arduino Uno | Arduino Neon Lab

#include <Servo.h>
Servo valvula;
const int SECO=700,UMIDO=570;
bool aberta=false;
void setup(){valvula.attach(5);valvula.write(0);}
void loop(){
 int v=analogRead(A0);
 if(v>SECO)aberta=true;
 else if(v<UMIDO)aberta=false;
 valvula.write(aberta?90:0);delay(400);
}
