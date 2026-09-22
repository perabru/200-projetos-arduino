// Projeto 200 - Robo sumo com borda e ultrassom
// Arduino Uno | Arduino Neon Lab

const byte LE=2,LD=3,ENA=5,ENB=6;
const byte IN1=7,IN2=8,IN3=9,IN4=10,TRIG=12,ECHO=13;
void motores(int e,int d){
 digitalWrite(IN1,e>=0);digitalWrite(IN2,e<0);
 digitalWrite(IN3,d>=0);digitalWrite(IN4,d<0);
 analogWrite(ENA,abs(e));analogWrite(ENB,abs(d));
}
long cm(){digitalWrite(TRIG,LOW);delayMicroseconds(2);
 digitalWrite(TRIG,HIGH);delayMicroseconds(10);digitalWrite(TRIG,LOW);
 unsigned long t=pulseIn(ECHO,HIGH,18000);return t?t/58:999;}
void setup(){for(byte p:{ENA,ENB,IN1,IN2,IN3,IN4,TRIG})pinMode(p,OUTPUT);
 pinMode(LE,INPUT);pinMode(LD,INPUT);pinMode(ECHO,INPUT);}
void loop(){
 if(digitalRead(LE)==LOW || digitalRead(LD)==LOW){
  motores(-190,-190);delay(300);motores(150,-150);delay(300);
 }else if(cm()<35)motores(240,240);
 else motores(100,-100);
 delay(35);
}
