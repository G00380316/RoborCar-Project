void forwards(){
digitalWrite(ENR,HIGH);
digitalWrite(ENL,HIGH);

digitalWrite(Y1,LOW);
digitalWrite(Y2,HIGH);
digitalWrite(Y3,LOW);
digitalWrite(Y4,HIGH);

for(int i =0; i<=10; i++){
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
