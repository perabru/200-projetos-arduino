// Projeto 080 - Controle de LED por IR
// Arduino Uno | Arduino Neon Lab

#include <IRremote.h>
const byte IR=11,LED=9;
bool aceso=false;
void setup(){pinMode(LED,OUTPUT);Serial.begin(9600);
 IrReceiver.begin(IR,ENABLE_LED_FEEDBACK);}
void loop(){
 if(IrReceiver.decode()){
  if(!(IrReceiver.decodedIRData.flags & IRDATA_FLAGS_IS_REPEAT)){
   aceso=!aceso;digitalWrite(LED,aceso);
   Serial.println(IrReceiver.decodedIRData.decodedRawData,HEX);
  }
  IrReceiver.resume();
 }
}
