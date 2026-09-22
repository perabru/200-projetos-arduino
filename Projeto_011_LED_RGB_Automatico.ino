// Projeto 011 - LED RGB Automático
// Arduino Uno | Arduino Neon Lab

int rPin=9, gPin=10, bPin=11;
 void setup(){}
 void loop(){
   for(int i=0;i<255;i++){ analogWrite(rPin,255-i); analogWrite(gPin,i); analogWrite(
 bPin,80); delay(15); }
   for(int i=0;i<255;i++){ analogWrite(gPin,255-i); analogWrite(bPin,i); analogWrite(
 rPin,30); delay(15); }
 }
