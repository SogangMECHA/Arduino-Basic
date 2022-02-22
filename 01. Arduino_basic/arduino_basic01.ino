void setup()
{
  pinMode(13, OUTPUT);   // 13번 핀을 출력 핀으로 지정
}

void loop()
{
  digitalWrite(13, HIGH);  // 13번핀을 HIGH 상태로 출력(LED 전원켜기)
  delay(1000);     // 1000밀리초 대기
  digitalWrite(13, LOW);   // 13번핀을 LOW 상태로 출력(LED 전원끄기)
  delay(1000);     // 1000밀리초 대기
}
