// Projeto 173 - Servo suave com potenciometro
// Arduino Uno | Arduino Neon Lab

#include <Servo.h>
Servo servo;int atual=90;
void setup(){servo.attach(5);servo.write(atual);}
void loop(){
 int destino=map(analogRead(A0),0,1023,0,180);
 if(destino>atual)atual++;
 if(destino<atual)atual--;
 servo.write(atual);delay(18);
}
