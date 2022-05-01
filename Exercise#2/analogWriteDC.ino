// C++ code
//
const int input1=5;
const int input2=6;
const int analog=3;
void setup()
{
  pinMode(input1, OUTPUT);
  pinMode(input2, OUTPUT);
}

void loop()
{
  analogWrite(analog,255);
  digitalWrite(input1,HIGH);
  digitalWrite(input2,LOW);
  delay(1000);
  analogWrite(analog,255/2);
  digitalWrite(input1,LOW);
  digitalWrite(input2,HIGH);
  delay(2000);

}
