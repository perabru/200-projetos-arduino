// Projeto 156 - Respiracao LED com millis
// Arduino Uno | Arduino Neon Lab

const byte LED=9;
unsigned long instante=0;int brilho=0,passo=1;
void setup(){pinMode(LED,OUTPUT);}
void loop(){
 if(millis()-instante>=8){instante=millis();
  brilho+=passo;
  if(brilho>=255 || brilho<=0) passo=-passo;
  brilho=constrain(brilho,0,255);analogWrite(LED,brilho);
 }
}
