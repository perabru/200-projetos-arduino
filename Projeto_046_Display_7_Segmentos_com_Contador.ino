// Projeto 046 - Display 7 Segmentos com Contador
// Arduino Uno | Arduino Neon Lab

const byte SEG[]={2,3,4,5,6,7,8},BTN=9;
const byte DIGITOS[10]={0x3F,0x06,0x5B,0x4F,0x66,
                        0x6D,0x7D,0x07,0x7F,0x6F};
byte contador=0;bool antes=HIGH;
void mostrar(byte n){
 for(byte b=0;b<7;b++)digitalWrite(SEG[b],bitRead(DIGITOS[n],b));
}
void setup(){for(byte p:SEG)pinMode(p,OUTPUT);pinMode(BTN,INPUT_PULLUP);}
void loop(){
 bool atual=digitalRead(BTN);
 if(antes==HIGH && atual==LOW){contador=(contador+1)%10;delay(45);}
 antes=atual;mostrar(contador);
}
