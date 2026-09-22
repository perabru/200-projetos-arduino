// Projeto 125 - Monitor de Turbidez
// Arduino Uno | Arduino Neon Lab

void setup(){ Serial.begin(9600); }
 void loop(){
   int valor = analogRead(A0);
   Serial.println(valor);
   delay(200);
 }
