// Projeto 005 - Botão Liga LED
// Arduino Uno | Arduino Neon Lab

const int BOTAO = 2;
 const int LED = 9;
 void setup(){
   pinMode(BOTAO, INPUT_PULLUP);
   pinMode(LED, OUTPUT);
 }
 void loop(){
   bool pressionado = digitalRead(BOTAO) == LOW;
   digitalWrite(LED, pressionado);
 }
