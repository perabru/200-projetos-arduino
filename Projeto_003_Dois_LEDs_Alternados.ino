// Projeto 003 - Dois LEDs Alternados
// Arduino Uno | Arduino Neon Lab

const byte LED_A=8, LED_B=9;
void setup(){ pinMode(LED_A,OUTPUT); pinMode(LED_B,OUTPUT); }
void loop(){
  digitalWrite(LED_A,HIGH); digitalWrite(LED_B,LOW); delay(500);
  digitalWrite(LED_A,LOW); digitalWrite(LED_B,HIGH); delay(500);
}
