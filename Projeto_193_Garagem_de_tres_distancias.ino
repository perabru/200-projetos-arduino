// Projeto 193 - Garagem de tres distancias
// Arduino Uno | Arduino Neon Lab

const byte TRIG=9,ECHO=10,LEDS[]={4,5,6};
void setup(){pinMode(TRIG,OUTPUT);pinMode(ECHO,INPUT);
 for(byte p:LEDS)pinMode(p,OUTPUT);}
void loop(){
 digitalWrite(TRIG,LOW);delayMicroseconds(2);digitalWrite(TRIG,HIGH);
 delayMicroseconds(10);digitalWrite(TRIG,LOW);
 unsigned long us=pulseIn(ECHO,HIGH,25000);
 long cm=us?us/58:999;
 byte faixa=cm>60?0:(cm>25?1:2);
 for(byte i=0;i<3;i++)digitalWrite(LEDS[i],i==faixa);
 delay(120);
}
