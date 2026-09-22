// Projeto 109 - Metrônomo
// Arduino Uno | Arduino Neon Lab

int bz=8;
 void setup(){}
 void loop(){
   int bpm = map(analogRead(A0),0,1023,40,200);
   int intervalo = 60000 / bpm;
   tone(bz,1000,60);
   delay(intervalo);
 }
