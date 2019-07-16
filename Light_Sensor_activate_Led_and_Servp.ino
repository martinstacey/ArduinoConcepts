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
  
  int  val1 = analogRead(sens);
  if(val1<100){
    digitalWrite(ledPin,HIGH);
    myservo.write(0);  
  }
  else{
    digitalWrite(ledPin,LOW);
    myservo.write(180);    
  }

  Serial.print("Sensor Luz: ");   
  Serial.print(analogRead(sens));
  Serial.print("   Poten: ");   
  Serial.println(analogRead(val2));
  
  delay(500);


}
