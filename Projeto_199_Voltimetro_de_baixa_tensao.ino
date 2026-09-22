// Projeto 199 - Voltimetro de baixa tensao
// Arduino Uno | Arduino Neon Lab

const float R_ALTO=20000.0,R_BAIXO=10000.0;
const float VREF=5.0;
void setup(){Serial.begin(9600);}
void loop(){
 int adc=analogRead(A0);
 float vPino=adc*VREF/1023.0;
 float entrada=vPino*(R_ALTO+R_BAIXO)/R_BAIXO;
 Serial.print("Entrada DC: ");Serial.println(entrada,2);
 delay(400);
}
