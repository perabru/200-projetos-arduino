// Projeto 106 - Dado Eletrônico
// Arduino Uno | Arduino Neon Lab

int led[]={2,3,4,5,6,7,8}, botao=9;
 void setup(){ for(int i=0;i<7;i++) pinMode(led[i],OUTPUT); pinMode(botao,INPUT_PULLUP);
 randomSeed(analogRead(A0)); }
 void loop(){
   if(!digitalRead(botao)){
     int v=random(1,7);
     for(int i=0;i<7;i++) digitalWrite(led[i], (i<v));
     delay(500);
   }
 }
