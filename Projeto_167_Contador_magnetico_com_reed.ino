// Projeto 167 - Contador magnetico com reed
// Arduino Uno | Arduino Neon Lab

const byte REED=2;
unsigned long total=0;bool anterior=HIGH;
void setup(){pinMode(REED,INPUT_PULLUP);Serial.begin(9600);}
void loop(){
 bool agora=digitalRead(REED);
 if(anterior==HIGH && agora==LOW){total++;Serial.println(total);delay(50);}
 anterior=agora;
}
