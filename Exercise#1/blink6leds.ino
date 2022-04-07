int timer = 1000;           
// 시간간격 timer라는 변수에 정수 500을 저장함.

void setup() {
for (int i = 2; i < 8; i++)  
  {
    pinMode(i, OUTPUT);      
  }
}

void loop() {
for (int i = 2; i < 8; i++) 
  { 
    digitalWrite(i, HIGH); // turn the pin on:
    delay(timer);    // timer(ms)의 시간 간격을 둠.
    //digitalWrite(i, LOW); // turn the pin off:
  }
for (int i = 7; i >= 2; i--)
  { 
    //digitalWrite(i, HIGH);
    delay(timer);
    digitalWrite(i, LOW);
  }
}