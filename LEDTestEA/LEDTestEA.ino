const int LLA = 12;
const int LLB = 13;
const int ledC = 1;
const int RLA = 4;
const int RLB = 5;
const int LeftBmpr=2;
const int RightBmpr=3;

void setup() {
  pinMode(LLA, OUTPUT);  
  pinMode(LLB, OUTPUT);  
  pinMode(ledC, OUTPUT);  
  pinMode(RLA, OUTPUT);  
  pinMode(RLB, OUTPUT); 
  pinMode(LeftBmpr, OUTPUT); 
  pinMode(RightBmpr, OUTPUT); 
}

void loop() { 

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
