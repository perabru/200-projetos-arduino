// Projeto 007 - Fade PWM em LED
// Arduino Uno | Arduino Neon Lab

const int LED = 9;
 void setup(){ pinMode(LED, OUTPUT); }
 void loop(){
   for(int i=0;i<=255;i++){ analogWrite(LED, i); delay(8); }
   for(int i=255;i>=0;i--){ analogWrite(LED, i); delay(8); }
 }
