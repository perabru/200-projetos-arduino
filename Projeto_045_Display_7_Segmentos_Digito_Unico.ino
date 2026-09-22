// Projeto 045 - Display 7 Segmentos: Dígito Único
// Arduino Uno | Arduino Neon Lab

const byte SEG[]={2,3,4,5,6,7,8};
const byte DIGITOS[10]={0x3F,0x06,0x5B,0x4F,0x66,
                        0x6D,0x7D,0x07,0x7F,0x6F};
void mostrar(byte n){
 for(byte b=0;b<7;b++)digitalWrite(SEG[b],bitRead(DIGITOS[n],b));
}
void setup(){for(byte p:SEG)pinMode(p,OUTPUT);}
void loop(){
 int v=analogRead(A0);
 byte digito=map(v,0,1024,0,10);
 mostrar(digito);delay(100);
}
