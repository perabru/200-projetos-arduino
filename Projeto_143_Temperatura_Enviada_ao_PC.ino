// Projeto 143 - Temperatura Enviada ao PC
// Arduino Uno | Arduino Neon Lab

void setup(){ Serial.begin(9600); }
 void loop(){
   int leitura = analogRead(A0);
   float tensao = leitura * 5.0 / 1023.0;
   float temperatura = tensao * 100.0;
   Serial.println(temperatura);
   delay(500);
 }
