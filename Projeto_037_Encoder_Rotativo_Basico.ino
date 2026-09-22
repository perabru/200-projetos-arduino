// Projeto 037 - Encoder Rotativo Básico
// Arduino Uno | Arduino Neon Lab

int clk=2, dt=3; int ultimoCLK=HIGH; long contador=0;
 void setup(){ pinMode(clk,INPUT_PULLUP); pinMode(dt,INPUT_PULLUP); Serial.begin(9600); }
 void loop(){
   int leituraCLK = digitalRead(clk);
   if(leituraCLK != ultimoCLK && leituraCLK == LOW){
     if(digitalRead(dt) != leituraCLK) contador++; else contador--;
     Serial.println(contador);
   }
   ultimoCLK = leituraCLK;
 }
