// Projeto 015 - Potenciômetro Controlando Barra de LEDs
// Arduino Uno | Arduino Neon Lab

const byte POT=A0, LEDS[]={4,5,6,7,8};
void setup(){ for(byte p:LEDS) pinMode(p,OUTPUT); }
void loop(){
  int quantidade=map(analogRead(POT),0,1024,0,6);
  for(byte i=0;i<5;i++) digitalWrite(LEDS[i],i<quantidade);
  delay(40);
}
