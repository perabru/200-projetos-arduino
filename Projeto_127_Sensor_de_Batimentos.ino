// Projeto 127 - Sensor de Batimentos
// Arduino Uno | Arduino Neon Lab

void setup(){ Serial.begin(9600); }
 void loop(){
   int sinal = analogRead(A0);
   Serial.println(sinal);
   delay(20);
 }
