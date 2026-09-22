// Projeto 165 - Ultrassom com media de cinco leituras
// Arduino Uno | Arduino Neon Lab

const byte TRIG=9,ECHO=10;
long medir(){digitalWrite(TRIG,LOW);delayMicroseconds(2);
 digitalWrite(TRIG,HIGH);delayMicroseconds(10);digitalWrite(TRIG,LOW);
 unsigned long t=pulseIn(ECHO,HIGH,24000);return t?t/58:-1;}
void setup(){pinMode(TRIG,OUTPUT);pinMode(ECHO,INPUT);Serial.begin(9600);}
void loop(){
 long soma=0;byte validas=0;
 for(byte i=0;i<5;i++){long v=medir();if(v>=0){soma+=v;validas++;}delay(60);}
 if(validas)Serial.println(soma/validas);
 else Serial.println("Sem eco");
}
