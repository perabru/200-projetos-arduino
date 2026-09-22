// Projeto 168 - Iluminacao por PIR sem bloqueio
// Arduino Uno | Arduino Neon Lab

const byte PIR=2,LED=9;
unsigned long ultimo=0;bool detectou=false;
void setup(){pinMode(PIR,INPUT);pinMode(LED,OUTPUT);}
void loop(){
 if(digitalRead(PIR)){ultimo=millis();detectou=true;}
 digitalWrite(LED,detectou && millis()-ultimo<10000UL);
}
