#include <Servo.h>
Servo myservo;  
int potpin = 1;  
int val2;    

void setup() {
  myservo.attach(9);  
} 

void loop() {
  val2 = analogRead(potpin);            
  val2 = map(val2, 0, 1023, 0, 180);     
  myservo.write(val2);                  
  delay(15);                          
}

