




const int ENR = 6 ;
const int Y1 = 7;
const int Y2 = 8;
const int ENL =11 ;
const int Y3 = 9   ;
const int Y4  = 10;
const int LLA = 12 ;
const int LLB = 13;
const int ledC = 1;
const int RLB =5 ;
const int RLA = 4;
const int LEFTBMPR = 2;
const int RIGHTBMPR = 3;

 

void setup()
{
  
pinMode(LEFTBMPR,INPUT);
pinMode(RIGHTBMPR,INPUT);
pinMode(LLA, OUTPUT);
pinMode(LLB, OUTPUT);
pinMode(ledC, OUTPUT);
pinMode(RLB , OUTPUT);
pinMode(RLA, OUTPUT);
pinMode(ENR, OUTPUT);
pinMode(ENL, OUTPUT);
pinMode(Y1, OUTPUT);
pinMode(Y2, OUTPUT);
pinMode(Y3, OUTPUT);
pinMode(Y4, OUTPUT);

 

}
void loop() {

mspeed(); 

/*
analogWrite(ENR,175); 
analogWrite(ENL,175); 
digitalWrite(Y1,LOW);
digitalWrite(Y3,LOW);
digitalWrite(Y2,HIGH);
digitalWrite(Y4,HIGH);
digitalWrite(LLA,HIGH);
digitalWrite(RLA,HIGH);
delay(500);
digitalWrite(LLA,LOW);
digitalWrite(RLA,LOW);
digitalWrite(LLB ,HIGH);
digitalWrite(RLB,HIGH);
delay(500);
digitalWrite(LLB ,LOW);
digitalWrite(RLB,LOW);
digitalWrite(ledC,HIGH);
delay(500);
digitalWrite(ledC,LOW);
analogWrite(ENR,100); 
analogWrite(ENL,100);
digitalWrite(Y2,LOW);
digitalWrite(Y4,LOW);
delay(100);
digitalWrite(Y1,HIGH);
digitalWrite(Y3,HIGH);
digitalWrite(ledC,HIGH);
delay(500);
digitalWrite(ledC,LOW);
digitalWrite(LLB ,HIGH);
digitalWrite(RLB,HIGH);
delay(500);
digitalWrite(LLB ,LOW);
digitalWrite(RLB,LOW);
digitalWrite(LLA,HIGH);
digitalWrite(RLA,HIGH);
delay(500);
digitalWrite(LLA,LOW);
digitalWrite(RLA,LOW);
delay(500);*/
}
