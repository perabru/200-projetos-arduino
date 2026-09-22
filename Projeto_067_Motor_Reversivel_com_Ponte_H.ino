// Projeto 067 - Motor Reversível com Ponte H
// Arduino Uno | Arduino Neon Lab

const byte ENA=5, IN1=8, IN2=9, BTN=2;
bool reverso=false, anterior=HIGH;
void setup(){ pinMode(ENA,OUTPUT); pinMode(IN1,OUTPUT);
  pinMode(IN2,OUTPUT); pinMode(BTN,INPUT_PULLUP); }
void loop(){
  bool atual=digitalRead(BTN);
  if(anterior==HIGH && atual==LOW){
    analogWrite(ENA,0); delay(300); reverso=!reverso;
  }
  anterior=atual;
  digitalWrite(IN1,!reverso); digitalWrite(IN2,reverso);
  analogWrite(ENA,170); delay(30);
}
