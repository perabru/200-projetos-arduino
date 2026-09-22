// Projeto 152 - Debounce sem delay
// Arduino Uno | Arduino Neon Lab

const byte BTN=2,LED=9;
bool leituraAnt=HIGH,estavel=HIGH,saida=false;
unsigned long alteracao=0;
void setup(){pinMode(BTN,INPUT_PULLUP);pinMode(LED,OUTPUT);}
void loop(){
 bool leitura=digitalRead(BTN);
 if(leitura!=leituraAnt) alteracao=millis();
 if(millis()-alteracao>50 && leitura!=estavel){
  estavel=leitura;
  if(estavel==LOW) saida=!saida;
 }
 digitalWrite(LED,saida);leituraAnt=leitura;
}
