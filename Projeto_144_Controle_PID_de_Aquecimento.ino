// Projeto 144 - Controle PID de Aquecimento
// Arduino Uno | Arduino Neon Lab

// Controle PID discreto didatico, PWM aplicado a um LED de teste.
const byte LM35=A0,SAIDA=5;
const float ALVO=30.0,KP=10.0,KI=0.8,KD=1.5;
float integral=0,erroAnt=0;
unsigned long instante=0;
void setup(){pinMode(SAIDA,OUTPUT);Serial.begin(9600);instante=millis();}
void loop(){
 if(millis()-instante<200) return;
 float dt=(millis()-instante)/1000.0;instante=millis();
 float t=analogRead(LM35)*(5.0/1023.0)*100.0;
 float erro=ALVO-t;
 integral=constrain(integral+erro*dt,-50.0f,50.0f);
 float derivada=(erro-erroAnt)/dt;erroAnt=erro;
 int pwm=constrain((int)(KP*erro+KI*integral+KD*derivada),0,255);
 analogWrite(SAIDA,pwm);Serial.println(t);
}
