void playNoteA(int time) {
  for (int i = 0; i <= time; i++) {
  digitalWrite(12, HIGH);
  delayMicroseconds(1136);
  digitalWrite(12, LOW);
  delayMicroseconds(1136);
  }
}
void playNoteB(int time) {
  for (int i = 0; i <= time; i++) {
  digitalWrite(12, HIGH);
  delayMicroseconds(1012);
  digitalWrite(12, LOW);
  delayMicroseconds(1012);
  }
}
void playNoteC(int time) {
  for (int i = 0; i <= time; i++) {
  digitalWrite(12, HIGH);
  delayMicroseconds(1908);
  digitalWrite(12, LOW);
  delayMicroseconds(1908);
  }
}
void playNoteD(int time) {
  for (int i = 0; i <= time; i++) {
  digitalWrite(12, HIGH);
  delayMicroseconds(1700);
  digitalWrite(12, LOW);
  delayMicroseconds(1700);
  }
}
void playNoteE(int time) {
  for (int i = 0; i <= time; i++) {
  digitalWrite(12, HIGH);
  delayMicroseconds(1515);
  digitalWrite(12, LOW);
  delayMicroseconds(1515);
  }
}
void playNoteF(int time) {
  for (int i = 0; i <= time; i++) {
  digitalWrite(12, HIGH);
  delayMicroseconds(1428);
  digitalWrite(12, LOW);
  delayMicroseconds(1428);
  }
}
void playNoteG(int time) {
  for (int i = 0; i <= time; i++) {
  digitalWrite(12, HIGH);
  delayMicroseconds(1275);
  digitalWrite(12, LOW);
  delayMicroseconds(1275);
  }
}

void setup() {
  // put your setup code here, to run once:
pinMode(12, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  //twinkle twinkle little star...
    playNoteC(20);
    delay(500);
    playNoteC(20);
    delay(500);
    playNoteG(20);
    delay(500);
    playNoteG(20);
    delay(500);
    playNoteA(20);
    delay(500);
    playNoteA(20);
    delay(500);
    playNoteG(80);
    delay(1000);

//how i wonder what you are...
    playNoteF(20);
    delay(500);
    playNoteF(20);
    delay(500);
    playNoteE(20);
    delay(500);
    playNoteE(20);
    delay(500);
    playNoteD(20);
    delay(500);
    playNoteD(20);
    delay(500);
    playNoteC(80);
    delay(1000);

//up above the world so high...
    playNoteG(20);
    delay(500);
    playNoteG(20);
    delay(500);
    playNoteF(20);
    delay(500);
    playNoteF(20);
    delay(500);
    playNoteE(20);
    delay(500);
    playNoteE(20);
    delay(500);
    playNoteD(80);
    delay(1000);

//like a diamond in the sky
    playNoteG(20);
    delay(500);
    playNoteG(20);
    delay(500);
    playNoteF(20);
    delay(500);
    playNoteF(20);
    delay(500);
    playNoteE(20);
    delay(500);
    playNoteE(20);
    delay(500);
    playNoteD(80);
    delay(1000);

  //twinkle twinkle little star...
    playNoteC(20);
    delay(500);
    playNoteC(20);
    delay(500);
    playNoteG(20);
    delay(500);
    playNoteG(20);
    delay(500);
    playNoteA(20);
    delay(500);
    playNoteA(20);
    delay(500);
    playNoteG(80);
    delay(1000);

//how i wonder what you are...
    playNoteF(20);
    delay(500);
    playNoteF(20);
    delay(500);
    playNoteE(20);
    delay(500);
    playNoteE(20);
    delay(500);
    playNoteD(20);
    delay(500);
    playNoteD(20);
    delay(500);
    playNoteC(80);
    delay(1000);
   
};
