// Projeto 188 - Servo por Bluetooth HC-05
// Arduino Uno | Arduino Neon Lab

#include <SoftwareSerial.h>
#include <Servo.h>
SoftwareSerial bt(10,11);Servo servo;
void setup(){bt.begin(9600);servo.attach(5);servo.write(90);}
void loop(){
 if(bt.available()){
  int ang=bt.parseInt();
  if(ang>=0&&ang<=180){servo.write(ang);bt.println("OK");}
 }
}
