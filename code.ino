// C++ code
//

#define RIGHTRED 1
#define RIGHTYELLOW 2
#define RIGHTGREEN 3
#define LEFTRED 4
#define LEFTYELLOW 5
#define LEFTGREEN 6
#define BUTTON 7


void setup()
{
  pinMode(RIGHTRED,OUTPUT);
  pinMode(RIGHTYELLOW,OUTPUT);
  pinMode(RIGHTGREEN,OUTPUT);
  pinMode(LEFTRED,OUTPUT);
  pinMode(LEFTYELLOW,OUTPUT);
  pinMode(LEFTGREEN,OUTPUT);
  pinMode(BUTTON,INPUT);
  
  digitalWrite(RIGHTGREEN,HIGH);
  digitalWrite(LEFTRED,HIGH);
}

void loop()
{
  if (digitalRead(BUTTON) == 1 && digitalRead(LEFTRED) == 1 && digitalRead(RIGHTGREEN) == 1)
  {
    digitalWrite(RIGHTGREEN,LOW);
    digitalWrite(RIGHTYELLOW,HIGH);
    delay(400);
  }
  
  if (digitalRead(BUTTON) == 1 && digitalRead(RIGHTYELLOW) == 1 && digitalRead(LEFTRED) == 1)
  {
   	digitalWrite(RIGHTYELLOW,LOW);
    digitalWrite(RIGHTRED,HIGH);
    digitalWrite(LEFTRED,LOW);
    digitalWrite(LEFTGREEN,HIGH); 
    delay(400);
  }

  if (digitalRead(BUTTON) == 1 && digitalRead(LEFTYELLOW) == 1 && digitalRead(RIGHTRED) == 1)
  {
    digitalWrite(LEFTYELLOW,LOW);
    digitalWrite(LEFTRED,HIGH);
    digitalWrite(RIGHTRED,LOW);
    digitalWrite(RIGHTGREEN,HIGH); 
    delay(400);
  }
 
  if (digitalRead(BUTTON) == 1 && digitalRead(RIGHTRED) == 1 && digitalRead(LEFTGREEN) == 1)
  {
    digitalWrite(LEFTGREEN,LOW);
    digitalWrite(LEFTYELLOW,HIGH);
    delay(400);
  }
 
 
  
 
}
