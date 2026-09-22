// Projeto 014 - Potenciômetro Controlando Brilho
// Arduino Uno | Arduino Neon Lab

const byte POT=A0, LED=9;
void setup(){ pinMode(LED,OUTPUT); Serial.begin(9600); }
void loop(){
  int leitura=analogRead(POT);
  byte brilho=map(leitura,0,1023,0,255);
  analogWrite(LED,brilho);
  Serial.println(brilho); delay(40);
}
