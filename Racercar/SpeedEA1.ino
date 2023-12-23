 void mspeed(){
digitalWrite(ENR,HIGH);
digitalWrite(ENL,HIGH);

for(int counter=0;counter<=4;counter++)
{
analogWrite(ENR,100);
analogWrite(ENL,120);
digitalWrite(Y1,LOW);
digitalWrite(Y2,HIGH);
digitalWrite(Y3,LOW);
digitalWrite(Y4,HIGH);

digitalWrite(LLA,HIGH);
digitalWrite(RLA,HIGH);
delay(100);
digitalWrite(LLA,LOW);
digitalWrite(RLA,LOW);
digitalWrite(LLB,HIGH);
digitalWrite(RLB,HIGH);
delay(100);
digitalWrite(LLB,LOW);
digitalWrite(RLB,LOW);
digitalWrite(ledC,HIGH);
delay(100);
digitalWrite(ledC,LOW);
delay(100);
}

for(int x=0;x<=5;x++)
{
analogWrite(ENR,160);
analogWrite(ENL,160);
digitalWrite(Y1,LOW);
digitalWrite(Y2,HIGH);
digitalWrite(Y3,LOW);
digitalWrite(Y4,HIGH);

digitalWrite(LLA,HIGH);
digitalWrite(RLA,HIGH);
delay(100);
digitalWrite(LLA,LOW);
digitalWrite(RLA,LOW);
digitalWrite(LLB,HIGH);
digitalWrite(RLB,HIGH);
delay(100);
digitalWrite(LLB,LOW);
digitalWrite(RLB,LOW);
digitalWrite(ledC,HIGH);
delay(100);
digitalWrite(ledC,LOW);
delay(100);
}

for(int y=0;y<=12;y++)
{
analogWrite(ENR,255);
analogWrite(ENL,255);
digitalWrite(Y1,LOW);
digitalWrite(Y2,HIGH);
digitalWrite(Y3,LOW);
digitalWrite(Y4,HIGH);

digitalWrite(LLA,HIGH);
digitalWrite(RLA,HIGH);
delay(100);
digitalWrite(LLA,LOW);
digitalWrite(RLA,LOW);
digitalWrite(LLB,HIGH);
digitalWrite(RLB,HIGH);
delay(100);
digitalWrite(LLB,LOW);
digitalWrite(RLB,LOW);
digitalWrite(ledC,HIGH);
delay(100);
digitalWrite(ledC,LOW);
delay(100);
}
}
