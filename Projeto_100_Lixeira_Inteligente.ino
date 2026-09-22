// Projeto 100 - Lixeira Inteligente
// Arduino Uno | Arduino Neon Lab

#include <Servo.h>
const byte TRIG=9,ECHO=10,SERVO=5;
Servo tampa;
long distancia(){
  digitalWrite(TRIG,LOW);delayMicroseconds(2);
  digitalWrite(TRIG,HIGH);delayMicroseconds(10);digitalWrite(TRIG,LOW);
  unsigned long t=pulseIn(ECHO,HIGH,25000UL);
  return t ? t/58 : 999;
}
void setup(){ pinMode(TRIG,OUTPUT);pinMode(ECHO,INPUT);
  tampa.attach(SERVO);tampa.write(0); }
void loop(){
  if(distancia()<20){ tampa.write(90);delay(3000); }
  else tampa.write(0);
  delay(200);
}
