// Projeto 066 - Velocidade de Motor por PWM
// Arduino Uno | Arduino Neon Lab

const byte ENA=5, IN1=8, IN2=9, POT=A0;
void setup(){ pinMode(ENA,OUTPUT); pinMode(IN1,OUTPUT); pinMode(IN2,OUTPUT);
  digitalWrite(IN1,HIGH); digitalWrite(IN2,LOW); }
void loop(){
  byte velocidade=map(analogRead(POT),0,1023,0,255);
  analogWrite(ENA,velocidade); delay(50);
}
