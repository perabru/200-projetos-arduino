// Projeto 027 - Lâmpada de Presença com PIR
// Arduino Uno | Arduino Neon Lab

const byte PIR=2, LED=9;
unsigned long ultimaDeteccao=0;
void setup(){ pinMode(PIR,INPUT); pinMode(LED,OUTPUT); }
void loop(){
  if(digitalRead(PIR)==HIGH) ultimaDeteccao=millis();
  digitalWrite(LED, millis()-ultimaDeteccao<10000UL);
  delay(100);
}
