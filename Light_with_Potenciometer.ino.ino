const int led = 3;
int brillo;
void setup() {
  pinMode(led, OUTPUT);
}

void loop() {
  for (brillo = 0; brillo < 256; brillo++) {
    analogWrite(led, brillo);
    delay(10);
  }
  for (brillo = 255; brillo >= 0; brillo--) {
    analogWrite(led, brillo);
    delay(10);
  }
}


