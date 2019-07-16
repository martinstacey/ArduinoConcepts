int sp = 8;
int lp = 13;
void setup (){
  pinMode(sp,INPUT);
  pinMode(lp,OUTPUT);
}

void loop (){
  if (digitalRead(sp)==HIGH){
  digitalWrite(lp,HIGH);
  }
  else{
    digitalWrite(lp,LOW);
  }
}
