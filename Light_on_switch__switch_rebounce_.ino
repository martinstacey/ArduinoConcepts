int sp = 8;
int lp = 13;
boolean lb=LOW;
boolean cb = LOW; 

void setup() {
  pinMode(sp, INPUT);
  pinMode(lp, OUTPUT);
}

void loop() {
  if (digitalRead(sp) == HIGH) {
  delay(20);
    if(digitalRead(sp) == HIGH || digitalRead(sp) == LOW){
    lb=!lb;  
    }
  }
  digitalWrite(lp,lb);
}

