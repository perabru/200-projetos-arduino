// Projeto 032 - Sensor de Som com Palmas
// Arduino Uno | Arduino Neon Lab

const byte SOM=2, LED=9;
bool ligado=false, anterior=HIGH;
unsigned long ultima=0;
void setup(){ pinMode(SOM,INPUT_PULLUP); pinMode(LED,OUTPUT); }
void loop(){
  bool atual=digitalRead(SOM);
  if(anterior==HIGH && atual==LOW && millis()-ultima>350){
    ligado=!ligado; ultima=millis();
  }
  anterior=atual; digitalWrite(LED,ligado);
}
