// Projeto 036 - Sensor IR de Obstáculo
// Arduino Uno | Arduino Neon Lab

const byte IR=2, LED=9;
void setup(){ pinMode(IR,INPUT); pinMode(LED,OUTPUT); Serial.begin(9600); }
void loop(){
  bool obstaculo=digitalRead(IR)==LOW;
  digitalWrite(LED,obstaculo);
  Serial.println(obstaculo?"OBSTACULO":"LIVRE");
  delay(100);
}
