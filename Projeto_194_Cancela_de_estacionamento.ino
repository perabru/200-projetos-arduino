// Projeto 194 - Cancela de estacionamento
// Arduino Uno | Arduino Neon Lab

#include <Servo.h>
Servo cancela;const byte TRIG=9,ECHO=10;
unsigned long ultima=0;
void setup(){pinMode(TRIG,OUTPUT);pinMode(ECHO,INPUT);
 cancela.attach(5);cancela.write(0);}
void loop(){
 digitalWrite(TRIG,LOW);delayMicroseconds(2);
 digitalWrite(TRIG,HIGH);delayMicroseconds(10);digitalWrite(TRIG,LOW);
 unsigned long us=pulseIn(ECHO,HIGH,24000);
 if(us && us/58<25)ultima=millis();
 cancela.write(millis()-ultima<3500?90:0);
 delay(80);
}
