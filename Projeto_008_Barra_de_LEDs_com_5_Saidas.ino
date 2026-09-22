// Projeto 008 - Barra de LEDs com 5 Saídas
// Arduino Uno | Arduino Neon Lab

int leds[] = {4,5,6,7,8};
 void setup(){ for(int i=0;i<5;i++) pinMode(leds[i], OUTPUT); }
 void loop(){
   for(int i=0;i<5;i++){ digitalWrite(leds[i], HIGH); delay(150); }
   for(int i=4;i>=0;i--){ digitalWrite(leds[i], LOW); delay(150); }
 }
