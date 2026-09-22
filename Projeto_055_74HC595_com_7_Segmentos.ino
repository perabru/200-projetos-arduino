// Projeto 055 - 74HC595 com 7 Segmentos
// Arduino Uno | Arduino Neon Lab

const byte DATA=11, CLOCK=12, LATCH=8;
const byte digitos[10]={0x3F,0x06,0x5B,0x4F,0x66,
                        0x6D,0x7D,0x07,0x7F,0x6F};
void mostrar(byte n){
  digitalWrite(LATCH,LOW);
  shiftOut(DATA,CLOCK,MSBFIRST,digitos[n]);
  digitalWrite(LATCH,HIGH);
}
void setup(){ pinMode(DATA,OUTPUT); pinMode(CLOCK,OUTPUT); pinMode(LATCH,OUTPUT); }
void loop(){ for(byte n=0;n<10;n++){ mostrar(n); delay(650); } }
