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

 
}
