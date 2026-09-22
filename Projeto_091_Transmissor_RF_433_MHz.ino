// Projeto 091 - Transmissor RF 433 MHz
// Arduino Uno | Arduino Neon Lab

// Transmissao OOK demonstrativa; receptor precisa decodificar pulsos.
const byte TX=12;
void setup(){ pinMode(TX,OUTPUT); }
void loop(){
  for(byte i=0;i<8;i++){
    digitalWrite(TX,HIGH); delayMicroseconds(500);
    digitalWrite(TX,LOW); delayMicroseconds(500);
  }
  delay(800);
}
