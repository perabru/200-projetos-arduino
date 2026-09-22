// Projeto 010 - LED RGB Manual
// Arduino Uno | Arduino Neon Lab

int rPin=9, gPin=10, bPin=11;
 void setup(){}
 void loop(){
   analogWrite(rPin, map(analogRead(A0),0,1023,0,255));
   analogWrite(gPin, map(analogRead(A1),0,1023,0,255));
   analogWrite(bPin, map(analogRead(A2),0,1023,0,255));
   delay(10);
 }
