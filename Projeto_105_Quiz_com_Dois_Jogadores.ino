// Projeto 105 - Quiz com Dois Jogadores
// Arduino Uno | Arduino Neon Lab

const byte JOGADOR1=2,JOGADOR2=3,LED1=9,LED2=10;
void setup(){pinMode(JOGADOR1,INPUT_PULLUP);pinMode(JOGADOR2,INPUT_PULLUP);
 pinMode(LED1,OUTPUT);pinMode(LED2,OUTPUT);}
void loop(){
 digitalWrite(LED1,LOW);digitalWrite(LED2,LOW);
 while(digitalRead(JOGADOR1)==HIGH && digitalRead(JOGADOR2)==HIGH){}
 bool primeiro=digitalRead(JOGADOR1)==LOW;
 digitalWrite(primeiro?LED1:LED2,HIGH);
 delay(1500);
 while(digitalRead(JOGADOR1)==LOW||digitalRead(JOGADOR2)==LOW)delay(20);
}
