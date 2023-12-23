const int ENR = 6 ;
const int Y1 = 7;
const int Y2 = 8;
const int ENL = 11 ;
const int Y3 = 9   ;
const int Y4  = 10;
const int LLA = 12 ;
const int LLB = 13;
const int ledC = 1;
const int RLB =5 ;
const int RLA = 4;
const int LEFTBMPR = 2;
const int RIGHTBMPR = 3;

void setup() {
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

void loop() 
{
  forwards();
  pause();
  backwards();
}
