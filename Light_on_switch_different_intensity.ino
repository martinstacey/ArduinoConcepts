int swich = 8;
int led = 11;
int turnlevel = 0;
boolean onoff0 = 0;
boolean onoffn1 = 0;

void setup () {
  pinMode(swich, INPUT);
  pinMode(led, OUTPUT);
}

void loop () {
  onoff0 = digitalRead(swich);
  if ((onoff0 == 1) && (onoffn1 == 0)) {
    turnlevel = turnlevel + 51;
  }
  onoffn1 = onoff0;
  delay(20);
  if (turnlevel > 255)
  {
    turnlevel = 0;
  }
  analogWrite(led, turnlevel);
}
