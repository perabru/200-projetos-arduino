// Projeto 006 - Botão com Toggle de Estado
// Arduino Uno | Arduino Neon Lab

const byte BTN=2, LED=9;
bool estado=false, anterior=HIGH;
unsigned long ultima=0;
void setup(){ pinMode(BTN,INPUT_PULLUP); pinMode(LED,OUTPUT); }
void loop(){
  bool atual=digitalRead(BTN);
  if(anterior==HIGH && atual==LOW && millis()-ultima>60){
    estado=!estado; digitalWrite(LED,estado); ultima=millis();
  }
  anterior=atual;
}
