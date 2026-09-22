// Projeto 184 - Logger CSV de luz e temperatura
// Arduino Uno | Arduino Neon Lab

void setup(){Serial.begin(9600);Serial.println("ms,luz,temp_C");}
void loop(){
 int luz=analogRead(A0);
 float temp=analogRead(A1)*5.0/1023.0*100.0;
 Serial.print(millis());Serial.print(',');Serial.print(luz);
 Serial.print(',');Serial.println(temp,1);delay(1000);
}
