// Projeto 018 - Sensor Reed Switch
// Arduino Uno | Arduino Neon Lab

int sensor=2, led=9;
 void setup(){ pinMode(sensor,INPUT_PULLUP); pinMode(led,OUTPUT); Serial.begin(9600); }
 void loop(){
   bool ativo = digitalRead(sensor)==LOW;
   digitalWrite(led, ativo);
   Serial.println(ativo ? "ATIVO" : "INATIVO");
   delay(100);
 }
