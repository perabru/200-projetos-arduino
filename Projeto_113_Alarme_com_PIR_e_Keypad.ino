// Projeto 113 - Alarme com PIR e Keypad
// Arduino Uno | Arduino Neon Lab

#include <Keypad.h>
const byte PIR=10,BUZZER=11;
const byte L=4,C=3;
char teclas[L][C]={{'1','2','3'},{'4','5','6'},{'7','8','9'},{'*','0','#'}};
byte linhas[L]={2,3,4,5},colunas[C]={6,7,8};
Keypad kp=Keypad(makeKeymap(teclas),linhas,colunas,L,C);
bool armado=false; String digitado="";
void setup(){pinMode(PIR,INPUT);}
void loop(){
  char k=kp.getKey();
  if(k=='*') digitado="";
  else if(k=='#'){
    if(digitado=="1234") armado=!armado;
    digitado="";
  } else if(k) digitado+=k;
  if(armado && digitalRead(PIR)) tone(BUZZER,900);
  else noTone(BUZZER);
  delay(40);
}
