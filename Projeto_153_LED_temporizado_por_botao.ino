// Projeto 153 - LED temporizado por botao
// Arduino Uno | Arduino Neon Lab

const byte BTN=2,LED=9;
unsigned long ate=0;bool anterior=HIGH;
void setup(){pinMode(BTN,INPUT_PULLUP);pinMode(LED,OUTPUT);}
void loop(){
 bool atual=digitalRead(BTN);
 if(anterior==HIGH && atual==LOW) ate=millis()+5000UL;
 anterior=atual;
 digitalWrite(LED,(long)(ate-millis())>0);
 delay(15);
}
