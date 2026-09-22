#include <Wire.h>
volatile byte recebidos=0;
void chegou(int quantidade){
 while(Wire.available()) { Wire.read(); recebidos++; }
}
void setup(){Serial.begin(9600);Wire.begin(8);Wire.onReceive(chegou);}
void loop(){
 noInterrupts();byte n=recebidos;recebidos=0;interrupts();
 if(n){Serial.print("Bytes recebidos: ");Serial.println(n);}
 delay(100);
}
