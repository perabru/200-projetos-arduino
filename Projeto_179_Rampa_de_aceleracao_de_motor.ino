// Projeto 179 - Rampa de aceleracao de motor
// Arduino Uno | Arduino Neon Lab

const byte ENA=5,IN1=8,IN2=9;
void setup(){pinMode(ENA,OUTPUT);pinMode(IN1,OUTPUT);
 pinMode(IN2,OUTPUT);digitalWrite(IN1,HIGH);digitalWrite(IN2,LOW);}
void loop(){
 for(int pwm=0;pwm<=230;pwm+=5){analogWrite(ENA,pwm);delay(50);}
 delay(1000);
 for(int pwm=230;pwm>=0;pwm-=5){analogWrite(ENA,pwm);delay(50);}
 delay(700);
}
