// Projeto 033 - Alarme de Gás MQ-2
// Arduino Uno | Arduino Neon Lab

int sensor=A0, led=9, bz=8;
 void setup(){ pinMode(led,OUTPUT); Serial.begin(9600); }
 void loop(){
   int valor = analogRead(sensor);
   Serial.println(valor);
   if(valor > 600){ digitalWrite(led,HIGH); tone(bz,1000,100); }
   else digitalWrite(led,LOW);
   delay(150);
 }
