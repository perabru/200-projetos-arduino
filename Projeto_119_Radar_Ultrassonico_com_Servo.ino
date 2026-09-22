// Projeto 119 - Radar Ultrassônico com Servo
// Arduino Uno | Arduino Neon Lab

#include <Servo.h>
 Servo s; int trig=9, echo=10;
 long dist(){ digitalWrite(trig,LOW); delayMicroseconds(2); digitalWrite(trig,HIGH);
 delayMicroseconds(10); digitalWrite(trig,LOW); return pulseIn(echo,HIGH)*0.034/2; }
 void setup(){ s.attach(5); pinMode(trig,OUTPUT); pinMode(echo,INPUT); Serial.begin(
 9600); }
 void loop(){ for(int a=20;a<160;a+=5){ s.write(a); delay(60); Serial.print(a); Serial.
 print(','); Serial.println(dist()); } }
