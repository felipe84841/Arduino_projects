/*
 * Felipe Desiglo <desiglo1@hotmail.com>
 * Project: LED
 * Power a LED in GPIO 13
 */

#define LED 13 //Define LED in port

void setup() {
  pinMode(LED, OUTPUT);
}

void loop() {
  digitalWrite(LED, HIGH);
  delay(1000);
}
