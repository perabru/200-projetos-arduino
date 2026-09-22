// Projeto 185 - Serial Plotter com tres canais
// Arduino Uno | Arduino Neon Lab

void setup(){Serial.begin(115200);}
void loop(){
 Serial.print("P1:");Serial.print(analogRead(A0));
 Serial.print(" P2:");Serial.print(analogRead(A1));
 Serial.print(" P3:");Serial.println(analogRead(A2));
 delay(60);
}
