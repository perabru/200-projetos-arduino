// Projeto 172 - Servo com tres posicoes
// Arduino Uno | Arduino Neon Lab

#include <Servo.h>
Servo servo;const byte B[]={2,3,4};
void setup(){servo.attach(5);for(byte p:B)pinMode(p,INPUT_PULLUP);}
void loop(){
 if(!digitalRead(B[0]))servo.write(0);
 else if(!digitalRead(B[1]))servo.write(90);
 else if(!digitalRead(B[2]))servo.write(180);
 delay(40);
}
