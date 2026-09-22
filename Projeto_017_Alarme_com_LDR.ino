// Projeto 017 - Alarme com LDR
// Arduino Uno | Arduino Neon Lab

const byte LDR=A0, BUZZER=8, LED=9;
const int LIMIAR=480;
void setup(){ pinMode(LED,OUTPUT); Serial.begin(9600); }
void loop(){
  int luz=analogRead(LDR);
  bool escuro=luz<LIMIAR;
  digitalWrite(LED,escuro);
  if(escuro) tone(BUZZER,880); else noTone(BUZZER);
  Serial.println(luz); delay(150);
}
