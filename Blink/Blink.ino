/*
 * Felipe Desiglo <desiglo1@hotmail.com>
 * Project: Blink
 * Blink a LED
 */

#define LED 13 //Define LED in port

void setup() {
  pinMode(LED, OUTPUT);
}

void loop() {
  digitalWrite(LED, HIGH);
  delay(1000);
  digitalWrite(LED, LOW);
  delay(1000);
}
