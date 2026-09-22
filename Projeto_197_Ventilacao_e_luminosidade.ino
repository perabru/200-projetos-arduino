// Projeto 197 - Ventilacao e luminosidade
// Arduino Uno | Arduino Neon Lab

const byte ENA=5,IN1=8,IN2=9,LED=7;
void setup(){for(byte p:{ENA,IN1,IN2,LED})pinMode(p,OUTPUT);
 digitalWrite(IN1,HIGH);digitalWrite(IN2,LOW);}
void loop(){
 float t=analogRead(A0)*5.0/1023.0*100.0;
 int pwm=constrain((int)((t-26)*24),0,255);
 analogWrite(ENA,pwm);
 digitalWrite(LED,analogRead(A1)<450);
 delay(200);
}
