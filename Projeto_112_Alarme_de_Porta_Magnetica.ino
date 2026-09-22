// Projeto 112 - Alarme de Porta Magnética
// Arduino Uno | Arduino Neon Lab

const byte REED=2,LED=9,BZ=8;
void setup(){pinMode(REED,INPUT_PULLUP);pinMode(LED,OUTPUT);}
void loop(){
 bool aberta=digitalRead(REED)==HIGH;
 digitalWrite(LED,aberta);
 if(aberta)tone(BZ,850);else noTone(BZ);
 delay(50);
}
