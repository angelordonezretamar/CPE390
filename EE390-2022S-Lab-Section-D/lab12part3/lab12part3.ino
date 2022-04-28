void playNoteA(int time) {
  for (int i = 0; i <= time; i++) {
  digitalWrite(12, HIGH);
  delayMicroseconds(1136);
  digitalWrite(12, LOW);
  delayMicroseconds(1136);
  }
}

void setup() {
  // put your setup code here, to run once:
pinMode(12, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  playNoteA(50);
  delay(500);
};
