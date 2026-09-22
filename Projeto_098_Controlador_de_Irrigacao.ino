// Projeto 098 - Controlador de Irrigação
// Arduino Uno | Arduino Neon Lab

int solo=A0, rele=7;
 void setup(){ pinMode(rele,OUTPUT); Serial.begin(9600); }
 void loop(){
   int leitura = analogRead(solo);
   bool seco = leitura > 650;
   digitalWrite(rele, seco);
   Serial.println(leitura);
   delay(1000);
 }
