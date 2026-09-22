// Projeto 111 - Comedouro Automático
// Arduino Uno | Arduino Neon Lab

#include <Servo.h>
#include <Wire.h>
#include <RTClib.h>
Servo tampa;RTC_DS3231 rtc;
int ultimoDia=-1;
void setup(){tampa.attach(5);tampa.write(0);rtc.begin();}
void loop(){
 DateTime agora=rtc.now();
 if(agora.hour()==8&&agora.minute()==0&&ultimoDia!=agora.day()){
  ultimoDia=agora.day();tampa.write(90);delay(800);tampa.write(0);
 }
 delay(1000);
}
