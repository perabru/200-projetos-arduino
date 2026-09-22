// Projeto 065 - Motor DC com L298N
// Arduino Uno | Arduino Neon Lab

int ENA=5, IN1=8, IN2=9;
 void setup(){ pinMode(ENA,OUTPUT); pinMode(IN1,OUTPUT); pinMode(IN2,OUTPUT); }
 void loop(){
   digitalWrite(IN1,HIGH); digitalWrite(IN2,LOW); analogWrite(ENA,180); delay(3000);
   digitalWrite(IN1,LOW); digitalWrite(IN2,HIGH); analogWrite(ENA,180); delay(3000);
 }
