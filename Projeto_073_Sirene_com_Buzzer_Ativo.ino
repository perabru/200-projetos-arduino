// Projeto 073 - Sirene com Buzzer Ativo
// Arduino Uno | Arduino Neon Lab

const byte BUZZER=8, BTN=2;
void setup(){ pinMode(BTN,INPUT_PULLUP); }
void loop(){
  if(digitalRead(BTN)==LOW){
    tone(BUZZER,650); delay(180); tone(BUZZER,1250); delay(180);
  } else { noTone(BUZZER); delay(30); }
}
