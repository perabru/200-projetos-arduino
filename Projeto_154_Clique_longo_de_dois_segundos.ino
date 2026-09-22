// Projeto 154 - Clique longo de dois segundos
// Arduino Uno | Arduino Neon Lab

const byte BTN=2,LED=9;
unsigned long inicio=0;bool antes=HIGH,ligado=false;
void setup(){pinMode(BTN,INPUT_PULLUP);pinMode(LED,OUTPUT);}
void loop(){
 bool agora=digitalRead(BTN);
 if(antes==HIGH && agora==LOW) inicio=millis();
 if(antes==LOW && agora==HIGH && millis()-inicio>=2000UL)
   ligado=!ligado;
 antes=agora;digitalWrite(LED,ligado);
 delay(20);
}
