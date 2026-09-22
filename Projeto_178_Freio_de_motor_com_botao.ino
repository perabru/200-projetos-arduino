// Projeto 178 - Freio de motor com botao
// Arduino Uno | Arduino Neon Lab

const byte BTN=2,ENA=5,IN1=8,IN2=9;
void setup(){pinMode(BTN,INPUT_PULLUP);
 for(byte p:{ENA,IN1,IN2})pinMode(p,OUTPUT);}
void loop(){
 bool frear=digitalRead(BTN)==LOW;
 digitalWrite(IN1,HIGH);digitalWrite(IN2,frear?HIGH:LOW);
 analogWrite(ENA,frear?255:170);
 delay(25);
}
