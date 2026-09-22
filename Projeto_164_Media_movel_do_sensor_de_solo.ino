// Projeto 164 - Media movel do sensor de solo
// Arduino Uno | Arduino Neon Lab

int amostras[8]={0};long soma=0;byte pos=0;
void setup(){Serial.begin(9600);}
void loop(){
 soma-=amostras[pos];amostras[pos]=analogRead(A0);
 soma+=amostras[pos];pos=(pos+1)%8;
 Serial.print("Media: ");Serial.println(soma/8);
 delay(250);
}
