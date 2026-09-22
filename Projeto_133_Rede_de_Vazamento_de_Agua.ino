// Projeto 133 - Rede de Vazamento de Água
// Arduino Uno | Arduino Neon Lab

int s1=A0,s2=A1,bz=8;
 void setup(){ Serial.begin(9600); }
 void loop(){
   int a=analogRead(s1), b=analogRead(s2);
   if(a>600 || b>600) tone(bz,1000); else noTone(bz);
   Serial.print(a); Serial.print(','); Serial.println(b); delay(200);
 }
