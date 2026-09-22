// Projeto 102 - Cofre Digital
// Arduino Uno | Arduino Neon Lab

#include <Keypad.h>
#include <Servo.h>
Servo trava;String digitada="";
const byte L=4,C=4;
char teclas[L][C]={{'1','2','3','A'},{'4','5','6','B'},
 {'7','8','9','C'},{'*','0','#','D'}};
byte linhas[L]={9,8,7,6},colunas[C]={5,4,3,2};
Keypad kp=Keypad(makeKeymap(teclas),linhas,colunas,L,C);
void setup(){trava.attach(10);trava.write(0);}
void loop(){
 char c=kp.getKey();if(!c)return;
 if(c=='*')digitada="";
 else if(c=='#'){
  if(digitada=="1234"){trava.write(90);delay(1500);trava.write(0);}
  digitada="";
 } else if(digitada.length()<8)digitada+=c;
}
