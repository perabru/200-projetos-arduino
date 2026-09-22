// Projeto 040 - Sensor Flex com Barra Gráfica
// Arduino Uno | Arduino Neon Lab

int leds[] = {4,5,6,7,8};
 void setup(){ for(int i=0;i<5;i++) pinMode(leds[i],OUTPUT); }
 void loop(){
   int valor = map(analogRead(A0), 300, 700, 0, 5);
   valor = constrain(valor,0,5);
   for(int i=0;i<5;i++) digitalWrite(leds[i], i<valor);
   delay(80);
 }
