// Projeto 166 - Buzzer proporcional a distancia
// Arduino Uno | Arduino Neon Lab

const byte TRIG=9,ECHO=10,BZ=8;
void setup(){pinMode(TRIG,OUTPUT);pinMode(ECHO,INPUT);}
void loop(){
 digitalWrite(TRIG,LOW);delayMicroseconds(2);
 digitalWrite(TRIG,HIGH);delayMicroseconds(10);digitalWrite(TRIG,LOW);
 unsigned long us=pulseIn(ECHO,HIGH,24000);
 int cm=us?us/58:999;
 if(cm<100){tone(BZ,1200,60);delay(constrain(cm*8,80,800));}
 else {noTone(BZ);delay(150);}
}
