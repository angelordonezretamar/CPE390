void setup() {
  // put your setup code here, to run once:
pinMode(LED_BUILTIN, OUTPUT);
pinMode(12, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(12) == LOW) {
    digitalWrite(LED_BUILTIN, LOW);
  }
  if (digitalRead(12) == HIGH) {
    digitalWrite(LED_BUILTIN, HIGH);
    delay(100);
    digitalWrite(LED_BUILTIN, LOW);
    delay(100);
  }
}
