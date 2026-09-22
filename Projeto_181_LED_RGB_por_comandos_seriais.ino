// Projeto 181 - LED RGB por comandos seriais
// Arduino Uno | Arduino Neon Lab

const byte R=9,G=10,B=11;
void setup(){Serial.begin(9600);for(byte p:{R,G,B})pinMode(p,OUTPUT);
 Serial.println("Envie R,G,B como 255,0,80");}
void loop(){
 if(Serial.available()){
  int r=Serial.parseInt(),g=Serial.parseInt(),b=Serial.parseInt();
  if(r>=0&&r<=255&&g>=0&&g<=255&&b>=0&&b<=255){
   analogWrite(R,r);analogWrite(G,g);analogWrite(B,b);
  }
  while(Serial.available())Serial.read();
 }
}
