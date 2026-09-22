// Projeto 149 - Casa Inteligente Compacta
// Arduino Uno | Arduino Neon Lab

const byte RELES[]={4,5,6,7};
const bool ATIVO=LOW;
void setup(){Serial.begin(9600);for(byte p:RELES){pinMode(p,OUTPUT);
 digitalWrite(p,!ATIVO);}Serial.println("Envie 1-4 para alternar rele");}
void loop(){
 if(Serial.available()){
  char c=Serial.read();
  if(c>='1'&&c<='4'){
   byte p=RELES[c-'1'];digitalWrite(p,digitalRead(p)==ATIVO?!ATIVO:ATIVO);
  }
 }
}
