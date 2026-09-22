// Projeto 057 - Fechadura com Keypad e Servo
// Arduino Uno | Arduino Neon Lab

#include <Keypad.h>

 #include <Servo.h>
 Servo s; String senha="1234", digitada="";
 const byte L=4,C=4; char teclas[L][C]={{'1','2','3','A'},{'4','5','6','B'},{'7','8','9',
 'C'},{'*','0','#','D'}};
 byte linhas[L]={9,8,7,6}, colunas[C]={5,4,3,2}; Keypad kp=Keypad(makeKeymap(teclas),
 linhas,colunas,L,C);
 void setup(){ s.attach(10); s.write(0); }
 void loop(){ char k=kp.getKey(); if(k){ if(k=='#'){ if(digitada==senha) s.write(90);
 digitada=""; } else digitada += k; } }
