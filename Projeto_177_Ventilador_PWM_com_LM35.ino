// Projeto 177 - Ventilador PWM com LM35
// Arduino Uno | Arduino Neon Lab

const byte ENA=5,IN1=8,IN2=9;
void setup(){pinMode(ENA,OUTPUT);pinMode(IN1,OUTPUT);
 pinMode(IN2,OUTPUT);digitalWrite(IN1,HIGH);digitalWrite(IN2,LOW);}
void loop(){
 float t=analogRead(A0)*5.0/1023.0*100.0;
 int pwm=constrain((int)((t-25)*22),0,255);
 analogWrite(ENA,pwm);delay(300);
}
