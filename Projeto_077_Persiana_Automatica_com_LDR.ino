// Projeto 077 - Persiana Automática com LDR
// Arduino Uno | Arduino Neon Lab

#include <Servo.h>
Servo persiana;
const int ABRE=650,FECHA=400;
bool aberta=false;
void setup(){persiana.attach(5);persiana.write(0);}
void loop(){
 int luz=analogRead(A0);
 if(luz>ABRE)aberta=true;
 else if(luz<FECHA)aberta=false;
 persiana.write(aberta?90:0);delay(200);
}
