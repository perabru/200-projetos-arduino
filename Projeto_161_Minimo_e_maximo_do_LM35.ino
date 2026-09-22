// Projeto 161 - Minimo e maximo do LM35
// Arduino Uno | Arduino Neon Lab

float minima=1000,maxima=-1000;
void setup(){Serial.begin(9600);}
void loop(){
 float t=analogRead(A0)*(5.0/1023.0)*100.0;
 if(t<minima) minima=t;if(t>maxima) maxima=t;
 Serial.print("T=");Serial.print(t,1);
 Serial.print(" Min=");Serial.print(minima,1);
 Serial.print(" Max=");Serial.println(maxima,1);delay(500);
}
