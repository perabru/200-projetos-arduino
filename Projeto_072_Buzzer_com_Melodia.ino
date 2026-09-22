// Projeto 072 - Buzzer com Melodia
// Arduino Uno | Arduino Neon Lab

int bz=8;
 void setup(){}
 void loop(){
   int notas[] = {262,330,392,523};
   for(int i=0;i<4;i++){ tone(bz, notas[i], 250); delay(300); }
   delay(800);
 }
