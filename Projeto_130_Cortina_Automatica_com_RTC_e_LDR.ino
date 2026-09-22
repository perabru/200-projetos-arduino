// Projeto 130 - Cortina Automática com RTC e LDR
// Arduino Uno | Arduino Neon Lab

#include <Wire.h>
#include <RTClib.h>
#include <Servo.h>
RTC_DS3231 rtc; Servo cortina;
const byte LDR=A0;
void setup(){rtc.begin();cortina.attach(5);}
void loop(){
 DateTime agora=rtc.now();
 bool dia=agora.hour()>=7 && agora.hour()<18;
 bool claro=analogRead(LDR)>500; // ajuste conforme divisor
 cortina.write(dia && claro?90:0);
 delay(1000);
}
