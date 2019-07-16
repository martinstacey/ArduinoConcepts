#include <Servo.h>
Servo miServo;
const int pinPot = 0;
const int pinServo = 2;
const int pulsoMin = 650;
const int pulsoMax = 2550;

int valor;
int angulo;
int anguloac;
void setup() {
miServo.attach(pinServo,pulsoMin,pulsoMax);
  pinMode(pinPot, INPUT);
  Serial.begin(9600);


  
}

void loop() {
  
valor = analogRead(pinPot);
angulo = map(valor, 0,1023, 180, 0);
Serial.println(analogRead(pinPot));
anguloac=anguloac+angulo;

miServo.write(angulo);
delay(200);
 



}
