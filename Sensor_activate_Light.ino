int sense1 = 0;
int sense2 = 1;
int ledPin1=3;
int ledPin2=5;

void setup() {
analogReference(DEFAULT);
pinMode(ledPin1,OUTPUT);
pinMode(ledPin2,OUTPUT);
Serial.begin(9600);
}

void loop() {
  int val1 = analogRead(sense1)/4;
  int val2 = analogRead(sense2)/4;

  analogWrite(ledPin1,val1);
  analogWrite(ledPin2,val2);
 
  Serial.print("s1: ");    
  Serial.println(analogRead(sense1)/4);
  Serial.print("s2: ");
  Serial.println(analogRead(sense2)/4);
     delay(500);

}
