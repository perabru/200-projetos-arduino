// Projeto 162 - Barra textual de luz na Serial
// Arduino Uno | Arduino Neon Lab

void setup(){Serial.begin(9600);}
void loop(){
 int v=analogRead(A0),barras=map(v,0,1023,0,30);
 for(int i=0;i<barras;i++)Serial.print('#');
 Serial.print(" ");Serial.println(v);delay(400);
}
