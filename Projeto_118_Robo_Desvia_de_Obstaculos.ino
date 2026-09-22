// Projeto 118 - Robô Desvia de Obstáculos
// Arduino Uno | Arduino Neon Lab

const byte TRIG=12,ECHO=13,ENA=5,ENB=6;
const byte IN1=7,IN2=8,IN3=9,IN4=10;
long cm(){ digitalWrite(TRIG,LOW);delayMicroseconds(2);
 digitalWrite(TRIG,HIGH);delayMicroseconds(10);digitalWrite(TRIG,LOW);
 unsigned long t=pulseIn(ECHO,HIGH,25000UL);return t?t/58:999; }
void motores(int e,int d){
 digitalWrite(IN1,e>=0); digitalWrite(IN2,e<0);
 digitalWrite(IN3,d>=0); digitalWrite(IN4,d<0);
 analogWrite(ENA,abs(e)); analogWrite(ENB,abs(d)); }
void setup(){ for(byte p:{TRIG,ENA,ENB,IN1,IN2,IN3,IN4}) pinMode(p,OUTPUT);
 pinMode(ECHO,INPUT); }
void loop(){
 if(cm()<22){motores(-150,-150);delay(350);motores(170,-170);delay(400);}
 else motores(170,170);
 delay(70);
}
