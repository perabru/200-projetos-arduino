// Projeto 160 - Indicador analogico em tres faixas
// Arduino Uno | Arduino Neon Lab

const byte LEDS[]={8,9,10};
void setup(){for(byte p:LEDS)pinMode(p,OUTPUT);}
void loop(){
 int v=analogRead(A0);
 byte faixa=v<341?0:(v<682?1:2);
 for(byte i=0;i<3;i++)digitalWrite(LEDS[i],i==faixa);
 delay(70);
}
