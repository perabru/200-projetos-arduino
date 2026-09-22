// Projeto 001 - Blink com LED Interno
// Arduino Uno | Arduino Neon Lab

const byte LED = LED_BUILTIN;
void setup() { pinMode(LED, OUTPUT); }
void loop() {
  digitalWrite(LED, HIGH); delay(500);
  digitalWrite(LED, LOW);  delay(500);
}
