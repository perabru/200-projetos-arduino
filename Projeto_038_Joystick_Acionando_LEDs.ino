// Projeto 038 - Joystick Acionando LEDs
// Arduino Uno | Arduino Neon Lab

int ledX=8, ledY=9;
 void setup(){ pinMode(ledX,OUTPUT); pinMode(ledY,OUTPUT); }
 void loop(){
   int x=analogRead(A0), y=analogRead(A1);
   digitalWrite(ledX, x>700 || x<300);
   digitalWrite(ledY, y>700 || y<300);
   delay(50);
 }
