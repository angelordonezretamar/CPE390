void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  analogWriteResolution(12);
}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(DAC0, 2048);
  analogWrite(DAC0, -128960);
}
