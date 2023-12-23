void backwards(){
digitalWrite(ENR,HIGH);
digitalWrite(ENL,HIGH);

digitalWrite(Y1,HIGH);
digitalWrite(Y2,LOW);
digitalWrite(Y3,HIGH);
digitalWrite(Y4,LOW);

for(int i =0; i<=2; i++){
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
