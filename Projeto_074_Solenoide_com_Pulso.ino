// Projeto 074 - Solenóide com Pulso
// Arduino Uno | Arduino Neon Lab

int saida=7;
 void setup(){ pinMode(saida,OUTPUT); }
 void loop(){ digitalWrite(saida,HIGH); delay(300); digitalWrite(saida,LOW); delay(2000);
  }
