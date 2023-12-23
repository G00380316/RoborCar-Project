void turnright()
{
  digitalWrite(ENR,HIGH);
  digitalWrite(ENL,HIGH);

  digitalWrite(Y1,LOW);
  digitalWrite(Y2,HIGH);
  digitalWrite(Y3,LOW);
  digitalWrite(Y4,HIGH);

  analogWrite(ENR,255);
  analogWrite(ENL,95);

  for(int right=0;right<18;right++){
  digitalWrite(RLB,HIGH);
  digitalWrite(RLA,HIGH);
  delay(100);
  digitalWrite(RLB,LOW);
  digitalWrite(RLA,LOW);
  delay(100);
  }
}
