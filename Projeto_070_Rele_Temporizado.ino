// Projeto 070 - Relé Temporizado
// Arduino Uno | Arduino Neon Lab

int rele=7;
 void setup(){ pinMode(rele,OUTPUT); }
 void loop(){ digitalWrite(rele,HIGH); delay(5000); digitalWrite(rele,LOW); delay(10000);
  }
