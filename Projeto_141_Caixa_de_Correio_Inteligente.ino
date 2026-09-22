// Projeto 141 - Caixa de Correio Inteligente
// Arduino Uno | Arduino Neon Lab

const byte PORTA=2,LED=9,BZ=8;
bool abriu=false;
void setup(){pinMode(PORTA,INPUT_PULLUP);pinMode(LED,OUTPUT);}
void loop(){
 if(digitalRead(PORTA)==HIGH)abriu=true;
 digitalWrite(LED,abriu);
 if(abriu)tone(BZ,700,50);else noTone(BZ);
 delay(300);
}
