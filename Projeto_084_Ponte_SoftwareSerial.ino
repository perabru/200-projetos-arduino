// Projeto 084 - Ponte SoftwareSerial
// Arduino Uno | Arduino Neon Lab

#include <SoftwareSerial.h>
SoftwareSerial canal(10,11); // RX Arduino, TX Arduino
void setup(){Serial.begin(115200);canal.begin(9600);
 Serial.println("Ponte serial pronta");}
void loop(){
 while(canal.available())Serial.write(canal.read());
 while(Serial.available())canal.write(Serial.read());
}
