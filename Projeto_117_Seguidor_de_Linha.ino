// Projeto 117 - Seguidor de Linha
// Arduino Uno | Arduino Neon Lab

const byte ESQ=2,DIR=3,ENA=5,ENB=6;
const byte IN1=7,IN2=8,IN3=9,IN4=10;
void motor(byte a,byte b,byte pwm,int vel){
 digitalWrite(a,vel>=0);digitalWrite(b,vel<0);
 analogWrite(pwm,abs(vel));
}
void setup(){ for(byte p:{IN1,IN2,IN3,IN4,ENA,ENB}) pinMode(p,OUTPUT);
 pinMode(ESQ,INPUT); pinMode(DIR,INPUT); }
void loop(){
 bool e=digitalRead(ESQ)==LOW,d=digitalRead(DIR)==LOW;
 motor(IN1,IN2,ENA,e?170:85);
 motor(IN3,IN4,ENB,d?170:85);
 delay(20);
}
