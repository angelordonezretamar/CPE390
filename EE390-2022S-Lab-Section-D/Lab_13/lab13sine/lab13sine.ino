void setup() {
  // put your setup code here, to run once:
analogWriteResolution(12);
pinMode(DAC0, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  double inc =11.25;
  double cvrt= (M_PI) / 180;
  for(int i = 0; 1<1000; i++) {
    analogWrite(DAC0, (2048 + (2047 * sin(inc * i * cvrt))));
    delayMicroseconds(22);
  }
}
