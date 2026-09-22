// Projeto 182 - LED serial com status
// Arduino Uno | Arduino Neon Lab

const byte LED=9;
void setup(){Serial.begin(9600);Serial.setTimeout(100);
 pinMode(LED,OUTPUT);Serial.println("ON / OFF / STATUS");}
void loop(){
 if(Serial.available()){
  String cmd=Serial.readStringUntil('\n');cmd.trim();cmd.toUpperCase();
  if(cmd=="ON")digitalWrite(LED,HIGH);
  else if(cmd=="OFF")digitalWrite(LED,LOW);
  else if(cmd=="STATUS")Serial.println(digitalRead(LED)?"ON":"OFF");
 }
}
