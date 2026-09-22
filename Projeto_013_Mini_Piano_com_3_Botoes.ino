// Projeto 013 - Mini Piano com 3 Botões
// Arduino Uno | Arduino Neon Lab

const byte BTN[]={2,3,4};
const int NOTAS[]={262,330,392};
const byte BUZZER=8;
void setup(){ for(byte i=0;i<3;i++) pinMode(BTN[i],INPUT_PULLUP); }
void loop(){
  bool tocando=false;
  for(byte i=0;i<3;i++) if(digitalRead(BTN[i])==LOW){
    tone(BUZZER,NOTAS[i]); tocando=true; break;
  }
  if(!tocando) noTone(BUZZER);
  delay(15);
}
