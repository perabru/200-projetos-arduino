// Projeto 124 - Monitor de pH
// Arduino Uno | Arduino Neon Lab

void setup(){ Serial.begin(9600); }
 void loop(){
   int leitura = analogRead(A0);
   float tensao = leitura * 5.0 / 1023.0;
   float ph = 7 + ((2.5 - tensao) / 0.18);
   Serial.println(ph);
   delay(500);
 }
