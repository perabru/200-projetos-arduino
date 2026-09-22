// Projeto 060 - RTC Controlando Relé
// Arduino Uno | Arduino Neon Lab

#include <Wire.h>
 #include <RTClib.h>

 RTC_DS3231 rtc; int rele=7;
 void setup(){ rtc.begin(); pinMode(rele,OUTPUT); }
 void loop(){
   DateTime now = rtc.now();
   digitalWrite(rele, now.hour()>=18 && now.hour()<22);
   delay(1000);
 }
