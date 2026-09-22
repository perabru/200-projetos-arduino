// Projeto 086 - Dois Arduinos em I2C
// Arduino Uno | Arduino Neon Lab

// Envie este sketch ao UNO mestre; veja o escravo na pasta complementar do ZIP.
#include <Wire.h>
void setup(){ Wire.begin(); Serial.begin(9600); }
void loop(){
  Wire.beginTransmission(8);
  Wire.write("Ola do mestre");
  byte erro=Wire.endTransmission();
  Serial.println(erro==0?"Enviado":"Erro I2C");
  delay(1000);
}
