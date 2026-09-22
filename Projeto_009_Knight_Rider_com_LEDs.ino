// Projeto 009 - Knight Rider com LEDs
// Arduino Uno | Arduino Neon Lab

int leds[] = {2,3,4,5,6,7};
 void setup(){ for(int i=0;i<6;i++) pinMode(leds[i], OUTPUT); }
 void loop(){
   for(int i=0;i<6;i++){ digitalWrite(leds[i],HIGH); delay(80); digitalWrite(leds[i],
 LOW); }
   for(int i=4;i>0;i--){ digitalWrite(leds[i],HIGH); delay(80); digitalWrite(leds[i],
 LOW); }
 }
