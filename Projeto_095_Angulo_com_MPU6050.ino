// Projeto 095 - Ângulo com MPU6050
// Arduino Uno | Arduino Neon Lab

#include <Wire.h>
const byte MPU=0x68;
void setup(){
  Wire.begin(); Serial.begin(9600);
  Wire.beginTransmission(MPU); Wire.write(0x6B); Wire.write(0);
  Wire.endTransmission();
}
void loop(){
  Wire.beginTransmission(MPU); Wire.write(0x3B); Wire.endTransmission(false);
  if(Wire.requestFrom(MPU,(byte)6)==6){
    int16_t ax=(Wire.read()<<8)|Wire.read();
    int16_t ay=(Wire.read()<<8)|Wire.read();
    int16_t az=(Wire.read()<<8)|Wire.read();
    float angulo=atan2((float)ay,(float)az)*180.0/PI;
    Serial.println(angulo,1);
  }
  delay(150);
}
