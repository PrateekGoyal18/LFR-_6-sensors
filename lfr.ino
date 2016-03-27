const int RIGHT_FORWARD = A8;
const int RIGHT_REVERSE = A9;
const int LEFT_FORWARD = A10;
const int LEFT_REVERSE = A11;
int l1=A1,
l2=A2,
l3=A3,
l4=A4,
l5=A5,
l6=A6;
void setup()
{
  Serial.begin(9600);
 pinMode(RIGHT_FORWARD, OUTPUT);
 pinMode(RIGHT_REVERSE, OUTPUT);
 pinMode(LEFT_FORWARD, OUTPUT);
 pinMode(LEFT_REVERSE, OUTPUT);
 
 pinMode(l1, INPUT);
 pinMode(l2, INPUT);
 pinMode(l3, INPUT);
 pinMode(l4, INPUT);
 pinMode(l5, INPUT);
 pinMode(l6, INPUT);

}
const int maxspeed = 500;
const int minspeed = 200;
void loop()
{
  int a,b,c,d,e,f;
  a=digitalRead(l1);
  b=digitalRead(l2);
  c=digitalRead(l3);
  d=digitalRead(l4);
  e=digitalRead(l5);
  f=digitalRead(l6);
  //analogWrite(RIGHT_FORWARD,700);
  if( (c==0)||(d==0) )
  {
  analogWrite(RIGHT_FORWARD,300);
  analogWrite(LEFT_FORWARD,300);
  }

  else if(a==0 || (a==0 && b==0))
  {
  analogWrite(LEFT_FORWARD,300);
  //analogWrite(RIGHT_REVERSE,150);
  }
  else if(f==0 || (e==0 && f==0))
  {
  analogWrite(RIGHT_FORWARD,300);
  //analogWrite(LEFT_REVERSE,150);
  }
  
  else if(a==0 && f==1) // && c==0 && d==0 && e==0 && f==1)
  {
   analogWrite(LEFT_FORWARD,300);
   analogWrite(RIGHT_REVERSE,200);
  }
  
  else if(a==1 && f==0)
  {
    analogWrite(RIGHT_FORWARD,300);  
    analogWrite(LEFT_REVERSE,100);
  }
  else if(d==0 && e==0 && f==0)
  {
    
    analogWrite(RIGHT_FORWARD,300);  
    analogWrite(LEFT_REVERSE,150);
  } else if(a==0 && b==0 && c==0)
  {
    
    analogWrite(LEFT_FORWARD,300);  
    analogWrite(RIGHT_REVERSE,150);
  }
  else 
  { 
  analogWrite(LEFT_FORWARD,0);
  analogWrite(RIGHT_FORWARD,0);
  }
}
