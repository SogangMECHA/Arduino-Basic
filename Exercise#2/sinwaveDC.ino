// C++ code
//
const int input1=5;
const int input2=6;
const int analog=3;
int f=1;
float t=0;
float A=0;
void setup()
{
  pinMode(input1, OUTPUT);
  pinMode(input2, OUTPUT);
}

void loop()
{
  A=255*sin(2*3.14*f*t);
  if (A>=0)
  {
    analogWrite(analog,A);
    digitalWrite(input1,HIGH);
    digitalWrite(input2,LOW);
  }
  else
  {
    analogWrite(analog,-A);
    digitalWrite(input1,LOW);
    digitalWrite(input2,HIGH);
  }
  t=t+0.01;
  delay(10);
}
