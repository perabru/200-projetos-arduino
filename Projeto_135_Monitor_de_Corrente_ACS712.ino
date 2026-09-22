// Projeto 135 - Monitor de Corrente ACS712
// Arduino Uno | Arduino Neon Lab

void setup(){ Serial.begin(9600); }
 void loop(){
   int leitura = analogRead(A0);
   float tensao = leitura * 5.0 / 1023.0;
   float corrente = (tensao - 2.5) / 0.185;
   Serial.println(corrente);
   delay(200);
 }
