const int input1=5;
const int input2=6;
int ccw=0;
int cw=0;
void setup()
{
  Serial.begin(9600);    //시리얼 통신 시작
  Serial.println("enter any key to proceed");
  Serial.read();    //아무 키 입력받음
}

void loop()
{
  if(Serial.available()){   //시리얼 값이 존재하면 진행. setup에서 입력을 하게끔 함.
    Serial.print("Counterclockwise PWM duty(0~255): ");
    ccw=Serial.parseInt();    //parseInt는 1초 안에 입력 값을 받으므로 빠르게 숫자를 입력한다
    Serial.println(ccw);
    Serial.print("Clockwise PWM duty(0~255): ");
    cw=Serial.parseInt();
    Serial.println(cw);
    analogWrite(input1,ccw);  //Counterclockwise(rpm>0)
    analogWrite(input2,cw);   //Clockwise(rpm<0)
    Serial.end();   //시리얼 통신 종료
  }
}
