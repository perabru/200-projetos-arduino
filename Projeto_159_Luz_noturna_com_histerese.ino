// Projeto 159 - Luz noturna com histerese
// Arduino Uno | Arduino Neon Lab

const byte FOTO=A0,LED=9;
bool aceso=false;
void setup(){pinMode(LED,OUTPUT);Serial.begin(9600);}
void loop(){
 int valor=analogRead(FOTO);
 if(valor<350) aceso=true;
 else if(valor>550) aceso=false;
 digitalWrite(LED,aceso);
 Serial.println(valor);delay(100);
}
