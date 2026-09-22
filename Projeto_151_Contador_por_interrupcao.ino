// Projeto 151 - Contador por interrupcao
// Arduino Uno | Arduino Neon Lab

const byte BTN=2;
volatile unsigned long pulsos=0;
void contar(){ pulsos++; }
void setup(){pinMode(BTN,INPUT_PULLUP);Serial.begin(9600);
 attachInterrupt(digitalPinToInterrupt(BTN),contar,FALLING);}
void loop(){
 noInterrupts();unsigned long copia=pulsos;interrupts();
 Serial.println(copia);delay(400);
}
