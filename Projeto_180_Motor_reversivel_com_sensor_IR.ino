// Projeto 180 - Motor reversivel com sensor IR
// Arduino Uno | Arduino Neon Lab

const byte IR=2,ENA=5,IN1=8,IN2=9;
void setup(){pinMode(IR,INPUT);for(byte p:{ENA,IN1,IN2})pinMode(p,OUTPUT);}
void loop(){
 bool obstaculo=digitalRead(IR)==LOW;
 digitalWrite(IN1,!obstaculo);digitalWrite(IN2,obstaculo);
 analogWrite(ENA,170);delay(80);
}
