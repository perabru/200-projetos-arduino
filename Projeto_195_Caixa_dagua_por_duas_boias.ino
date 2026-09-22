// Projeto 195 - Caixa dagua por duas boias
// Arduino Uno | Arduino Neon Lab

const byte BAIXO=2,ALTO=3,LED_B=8,LED_A=9;
void setup(){pinMode(BAIXO,INPUT_PULLUP);pinMode(ALTO,INPUT_PULLUP);
 pinMode(LED_B,OUTPUT);pinMode(LED_A,OUTPUT);}
void loop(){
 bool inferiorMolhada=digitalRead(BAIXO)==LOW;
 bool superiorMolhada=digitalRead(ALTO)==LOW;
 digitalWrite(LED_B,!inferiorMolhada);
 digitalWrite(LED_A,superiorMolhada);
 delay(100);
}
