// Projeto 123 - Balança com HX711
// Arduino Uno | Arduino Neon Lab

#include "HX711.h"
HX711 balanca;
const float FATOR=420.0; // EXEMPLO: calibrar com massa conhecida
void setup(){Serial.begin(9600);balanca.begin(3,2);
 balanca.set_scale(FATOR);balanca.tare();}
void loop(){
 if(balanca.is_ready()) Serial.println(balanca.get_units(5),2);
 delay(400);
}
