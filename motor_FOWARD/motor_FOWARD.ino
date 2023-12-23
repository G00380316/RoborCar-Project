








































































const int LLA=12;
const int LLB=13;
const int RLA=4;
const int RLB=5;
const int ledC=1;
const int ENR=6;
const int Y1=7;
const int Y2=8;
const int ENL=11;
const int Y3=9;
const int Y4=10;

void setup() {
  // put your setup code here, to run once:
pinMode(LLA, OUTPUT);
pinMode(LLB, OUTPUT);
pinMode(RLA, OUTPUT);
pinMode(RLB,OUTPUT);
pinMode(ledC, OUTPUT);
pinMode(ENR, OUTPUT);
pinMode(Y1,OUTPUT);
pinMode(Y2,OUTPUT);
pinMode(ENL,OUTPUT);
pinMode(Y3,OUTPUT);
pinMode(Y4,OUTPUT);
}


void loop() {
  for(int i = 0; i<3; i++){
  forward();
  }
}


/* digitalWrite(ENR,HIGH);
digitalWrite(ENL,HIGH);

 

digitalWrite(Y1,HIGH);
digitalWrite(Y2,LOW);
digitalWrite(Y3,HIGH);
digitalWrite(Y4,LOW);

 

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
delay(2000);

 

digitalWrite(Y1,LOW);
digitalWrite(Y2,HIGH);
digitalWrite(Y3,LOW);
digitalWrite(Y4,HIGH);

 

digitalWrite(ledC,HIGH);
delay(100);
digitalWrite(ledC,LOW);
digitalWrite(LLB,HIGH);
digitalWrite(RLB,HIGH);
delay(100);
digitalWrite(LLB,LOW);
digitalWrite(RLB,LOW);
digitalWrite(LLA,HIGH);
digitalWrite(RLA,HIGH);
delay(100);
digitalWrite(LLA,LOW);
digitalWrite(RLA,LOW);
delay(100);
delay(2000);
                                                                                                                                                                                                                                                                                                                                
  */
