void setup()
{
  Serial.begin(9600);    //Serial 통신속도 설정. Arduino같은 경우 9600으로 한다
  Serial.print("Hello_MECHA! ");  //줄 넘기지 않고 출력
  Serial.println("Write two integer numbers and one word");
  Serial.println("Use spacebar after each data"); //출력 후 줄 넘기기
}

void loop()
{
  if(Serial.available()){
    int input=Serial.read();    
    //맨 앞자리 숫자or문자를 ASCII코드로 반환. 두자리 이상 숫자나 문자는 첫번째 자리만 반환됨
    Serial.println(input);
    int ascii=Serial.parseInt();  //ASCII코드에 해당하는 숫자로 반환(입력한 그대로)
    Serial.println(ascii);
    String ch=Serial.readString();  //문자열 읽기
    Serial.println(ch);
  }
}
