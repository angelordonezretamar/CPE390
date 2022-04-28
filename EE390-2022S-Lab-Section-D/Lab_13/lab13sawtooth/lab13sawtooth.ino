void setup() {
  // put your setup code here, to run once:
analogWriteResolution(12);
pinMode(DAC0, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  //sampling frequency has to be 880Hz
  for(int i = 0; i<32; i++) {
    analogWrite(DAC0, ((4095/32) * i));
    delayMicroseconds(71);
  }
}
