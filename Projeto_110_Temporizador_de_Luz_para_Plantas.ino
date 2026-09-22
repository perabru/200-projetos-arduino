// Projeto 110 - Temporizador de Luz para Plantas
// Arduino Uno | Arduino Neon Lab

#include <Wire.h>
#include <RTClib.h>
RTC_DS3231 rtc;
const byte RELE=7;
const bool ATIVO=LOW; // ajuste ao seu modulo
void setup(){ pinMode(RELE,OUTPUT);digitalWrite(RELE,!ATIVO);
  if(!rtc.begin()) while(true){} }
void loop(){
  DateTime agora=rtc.now();
  bool periodo=agora.hour()>=7 && agora.hour()<19;
  digitalWrite(RELE, periodo?ATIVO:!ATIVO);
  delay(1000);
}
