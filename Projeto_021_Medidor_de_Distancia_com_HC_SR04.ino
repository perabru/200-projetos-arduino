// Projeto 021 - Medidor de Distância com HC-SR04
// Arduino Uno | Arduino Neon Lab

int trig=9, echo=10;
 long medir(){
   digitalWrite(trig,LOW); delayMicroseconds(2);
   digitalWrite(trig,HIGH); delayMicroseconds(10); digitalWrite(trig,LOW);
   return pulseIn(echo,HIGH)*0.034/2;
 }
 void setup(){ pinMode(trig,OUTPUT); pinMode(echo,INPUT); Serial.begin(9600); }
 void loop(){ Serial.println(medir()); delay(200); }
