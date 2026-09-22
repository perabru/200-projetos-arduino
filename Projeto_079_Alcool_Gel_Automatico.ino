// Projeto 079 - Álcool Gel Automático
// Arduino Uno | Arduino Neon Lab

#include <Servo.h>
 Servo s; int trig=9, echo=10;
 long medir(){ digitalWrite(trig,LOW); delayMicroseconds(2); digitalWrite(trig,HIGH);
 delayMicroseconds(10); digitalWrite(trig,LOW); return pulseIn(echo,HIGH)*0.034/2; }
 void setup(){ s.attach(5); pinMode(trig,OUTPUT); pinMode(echo,INPUT); s.write(0); }
 void loop(){
   long d = medir();
   if(d < 15){ s.write(90); delay(1200); }
   else s.write(0);
   delay(100);
 }
