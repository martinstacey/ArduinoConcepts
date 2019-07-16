int swich = 8;
int led = 11;
boolean turnon = 0;
boolean onoff0 = 0;
boolean onoffn1 = 0;

void setup () {
  pinMode(swich, INPUT);
  pinMode(led, OUTPUT);
}

void loop () {
  onoff0 = digitalRead(swich);
  if ((onoff0 == 1) && (onoffn1 == 0)) {
    turnon = !turnon;
  }
  onoffn1 = onoff0;
  delay(20);
  if (turnon == 1) {
    digitalWrite(led, 1);
  }
  else {
    digitalWrite(led, 0);
  }
}
