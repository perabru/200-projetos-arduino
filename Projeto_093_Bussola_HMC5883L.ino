// Projeto 093 - Bússola HMC5883L
// Arduino Uno | Arduino Neon Lab

#include <Wire.h>
const byte MAG=0x1E;
void setup(){Wire.begin();Serial.begin(9600);
 Wire.beginTransmission(MAG);Wire.write(0x02);Wire.write(0x00);
 Wire.endTransmission();}
void loop(){
 Wire.beginTransmission(MAG);Wire.write(0x03);Wire.endTransmission(false);
 if(Wire.requestFrom(MAG,(byte)6)==6){
  int16_t x=(Wire.read()<<8)|Wire.read();
  int16_t z=(Wire.read()<<8)|Wire.read();
  int16_t y=(Wire.read()<<8)|Wire.read();
  float ang=atan2((float)y,(float)x)*180.0/PI;
  if(ang<0)ang+=360;
  Serial.println(ang,1);
 }
 delay(300);
}
