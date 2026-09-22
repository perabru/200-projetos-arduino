// Projeto 016 - LDR como Lâmpada Automática
// Arduino Uno | Arduino Neon Lab

int ldr=A0, led=9;
 void setup(){ pinMode(led,OUTPUT); Serial.begin(9600); }
 void loop(){
   int valor = analogRead(ldr);
   Serial.println(valor);
   digitalWrite(led, valor < 500);
   delay(100);
 }
