 const int leftledA = 12;
const int leftledB = 13;
const int ledC = 1;
const int rightledA = 4;
const int rightledB = 5;
const int LeftBmpr=2;
const int RightBmpr=3;

void setup() {
  pinMode(leftledA, OUTPUT);  
  pinMode(leftledB, OUTPUT);  
  pinMode(ledC, OUTPUT);  
  pinMode(rightledA, OUTPUT);  
  pinMode(rightledB, OUTPUT); 
  pinMode(LeftBmpr, INPUT); 
  pinMode(RightBmpr, INPUT); 
}

void loop() { 

  digitalWrite(ledC,HIGH);

  if(digitalRead(LeftBmpr)== LOW)
   {
    digitalWrite(leftledA,HIGH);
    digitalWrite(leftledB,HIGH);
   }
   else
   {
    digitalWrite(leftledA,LOW);
    digitalWrite(leftledB,LOW);
   }

   if(digitalRead(RightBmpr)== LOW)
   {
    digitalWrite(rightledA,HIGH);
    digitalWrite(rightledB,HIGH);
   }
   else
   {
    digitalWrite(rightledA,LOW);
    digitalWrite(rightledB,LOW);
   }
   
  
}
