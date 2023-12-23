void turnleft()
{
  digitalWrite(ENR,HIGH);
  digitalWrite(ENL,HIGH);

  digitalWrite(Y1,LOW);
  digitalWrite(Y2,HIGH);
  digitalWrite(Y3,LOW);
  digitalWrite(Y4,HIGH);

  analogWrite(ENR,120);
  analogWrite(ENL,255);

  for(int left=0;left<17;left++){
  digitalWrite(LLA,HIGH);
  digitalWrite(LLB,HIGH);
  delay(100);
  digitalWrite(LLA,LOW);
  digitalWrite(LLB,LOW);
  delay(100);
  }
}
