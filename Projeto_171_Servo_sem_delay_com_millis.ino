// Projeto 171 - Servo sem delay com millis
// Arduino Uno | Arduino Neon Lab

#include <Servo.h>
Servo servo;int angulo=0,passo=1;unsigned long ultima=0;
void setup(){servo.attach(5);servo.write(0);}
void loop(){
 if(millis()-ultima>=20){ultima=millis();
  angulo+=passo;
  if(angulo>=180||angulo<=0)passo=-passo;
  servo.write(constrain(angulo,0,180));
 }
}
