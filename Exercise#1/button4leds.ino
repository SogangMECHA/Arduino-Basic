// C++ code
//
const int PUSHPIN = 3;

void setup()
{
  pinMode(PUSHPIN, INPUT);

  for (int i=10; i<=13; i++)
  {
  	pinMode(i, OUTPUT); // LED pins 10~13
  }
}

void loop()
{
  if (digitalRead(PUSHPIN) == HIGH)
  {
    for (int i=13; i>=10; i--){
      digitalWrite(i,HIGH);
      delay(200);
    }
  }
  else
  {
    for (int i=13; i>=10; i--){
      digitalWrite(i,LOW);
      delay(1);
    }
  }
  delay(10);
}