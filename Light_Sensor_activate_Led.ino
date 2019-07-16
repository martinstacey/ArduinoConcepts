  int sens = 0;
  int ledPin=13;
  int poten=1;

  #include <Servo.h>
  Servo myservo;  
  int potpin = 1;  
  int val2;

void setup() {
  myservo.attach(9); 
  pinMode(ledPin,OUTPUT);
  Serial.begin(9600);
}
void loop() {
  val2 = analogRead(potpin);            
  val2 = map(val2, 0, 1023, 0, 180);     
  myservo.write(val2);                  
  delay(15); 
  
  int  val1 = analogRead(sens);
  if(val1<100){
    digitalWrite(ledPin,HIGH);
  }
  else{
    digitalWrite(ledPin,LOW);
  }

  Serial.print("Sensor Luz: ");   
  Serial.print(analogRead(sens));
  Serial.print("   Poten: ");   
  Serial.println(analogRead(val2));
  
  delay(500);


}
