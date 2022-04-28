void setup() {
  // put your setup code here, to run once:
pinMode(12, OUTPUT);
pinMode(8, OUTPUT);
pinMode(4, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(12, HIGH);
delay(100);
digitalWrite(12, LOW);
delay(100);

digitalWrite(8, HIGH);
delay(100);
digitalWrite(8, LOW);
delay(100);

digitalWrite(4, HIGH);
delay(100);
digitalWrite(4, LOW);
delay(100);

//fusion-flicker rate: 2000Hz
}
