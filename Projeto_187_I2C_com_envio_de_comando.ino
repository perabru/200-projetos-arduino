// Projeto 187 - I2C com envio de comando
// Arduino Uno | Arduino Neon Lab

// Sketch do mestre; veja escravo.ino no ZIP.
#include <Wire.h>
const byte BOTAO=2;
void setup(){pinMode(BOTAO,INPUT_PULLUP);Wire.begin();}
void loop(){
 Wire.beginTransmission(8);
 Wire.write(digitalRead(BOTAO)==LOW?1:0);
 Wire.endTransmission();delay(80);
}
