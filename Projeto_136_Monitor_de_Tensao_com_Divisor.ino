// Projeto 136 - Monitor de Tensão com Divisor
// Arduino Uno | Arduino Neon Lab

void setup(){ Serial.begin(9600); }
 void loop(){
   float vout = analogRead(A0) * 5.0 / 1023.0;
   float vin = vout * 2.0; // exemplo para divisor 1:1
   Serial.println(vin);
   delay(300);
 }
