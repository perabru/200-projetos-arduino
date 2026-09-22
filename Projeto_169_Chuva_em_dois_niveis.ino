// Projeto 169 - Chuva em dois niveis
// Arduino Uno | Arduino Neon Lab

const byte AMARELO=8,VERMELHO=9;
void setup(){pinMode(AMARELO,OUTPUT);pinMode(VERMELHO,OUTPUT);}
void loop(){
 int valor=analogRead(A0); // menor geralmente significa mais agua
 digitalWrite(AMARELO,valor<700 && valor>=350);
 digitalWrite(VERMELHO,valor<350);
 delay(180);
}
