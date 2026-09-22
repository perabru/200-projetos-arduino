// Projeto 069 - Relé Ligando Lâmpada
// Arduino Uno | Arduino Neon Lab

int rele=7;
 void setup(){ pinMode(rele,OUTPUT); }
 void loop(){ digitalWrite(rele,HIGH); delay(1000); digitalWrite(rele,LOW); delay(1000);
 }
