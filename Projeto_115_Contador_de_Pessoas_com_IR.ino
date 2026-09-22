// Projeto 115 - Contador de Pessoas com IR
// Arduino Uno | Arduino Neon Lab

const byte ENTRADA=2,SAIDA=3;
int pessoas=0; bool eAnt=HIGH,sAnt=HIGH;
void setup(){ pinMode(ENTRADA,INPUT_PULLUP);pinMode(SAIDA,INPUT_PULLUP);
 Serial.begin(9600); }
void loop(){
 bool e=digitalRead(ENTRADA),s=digitalRead(SAIDA);
 if(eAnt==HIGH && e==LOW) pessoas++;
 if(sAnt==HIGH && s==LOW && pessoas>0) pessoas--;
 eAnt=e; sAnt=s;
 Serial.print("Presentes: ");Serial.println(pessoas);
 delay(100);
}
