// Projeto 053 - 74HC595 com 8 LEDs
// Arduino Uno | Arduino Neon Lab

int dataPin=11, clockPin=12, latchPin=8;
 void setup(){ pinMode(dataPin,OUTPUT); pinMode(clockPin,OUTPUT); pinMode(latchPin,
 OUTPUT); }
 void loop(){
   for(byte v=0; v<255; v++){
     digitalWrite(latchPin,LOW); shiftOut(dataPin,clockPin,MSBFIRST,v); digitalWrite(
 latchPin,HIGH); delay(80);
   }
 }
