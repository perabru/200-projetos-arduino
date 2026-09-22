// Projeto 116 - Detector de Vaga
// Arduino Uno | Arduino Neon Lab

int trig=9, echo=10, bz=8;
 long medir(){ digitalWrite(trig,LOW); delayMicroseconds(2); digitalWrite(trig,HIGH);
 delayMicroseconds(10); digitalWrite(trig,LOW); return pulseIn(echo,HIGH)*0.034/2; }
 void setup(){ pinMode(trig,OUTPUT); pinMode(echo,INPUT); }
 void loop(){
   long d = medir();
   if(d < 80){ tone(bz,1000,30); delay(map(d,5,80,60,400)); }
   else noTone(bz), delay(200);
 }
