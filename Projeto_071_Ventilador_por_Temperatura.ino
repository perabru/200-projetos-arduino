// Projeto 071 - Ventilador por Temperatura
// Arduino Uno | Arduino Neon Lab

int rele=7;
 void setup(){ pinMode(rele,OUTPUT); Serial.begin(9600); }
 void loop(){
   float t = analogRead(A0)*5.0/1023.0*100.0;
   digitalWrite(rele, t>28);
   Serial.println(t); delay(500);
 }
