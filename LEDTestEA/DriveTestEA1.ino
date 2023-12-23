void pause()
{
digitalWrite(ENR,LOW);
digitalWrite(ENL,LOW);

digitalWrite(Y1,LOW);
digitalWrite(Y2,LOW);
digitalWrite(Y3,LOW);
digitalWrite(Y4,LOW);
delay(1000);
}

void backwards(){
digitalWrite(ENR,HIGH);
digitalWrite(ENL,HIGH);

digitalWrite(Y1,HIGH);
digitalWrite(Y2,LOW);
digitalWrite(Y3,HIGH);
digitalWrite(Y4,LOW);

for(int i =0; i<=10; i++){
 digitalWrite(ledC,HIGH);
delay(100);
digitalWrite(ledC,LOW);
delay(100); 
digitalWrite(LLB,HIGH);
digitalWrite(RLB,HIGH); 
delay(100);
digitalWrite(LLB,LOW);
digitalWrite(RLB,LOW);
delay(100);
digitalWrite(LLA,HIGH);
digitalWrite(RLA,HIGH);
delay(100);
digitalWrite(LLA,LOW);
digitalWrite(RLA,LOW);
}
}
