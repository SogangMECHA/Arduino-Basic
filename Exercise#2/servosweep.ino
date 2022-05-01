#include<Servo.h>  //  서보모터의 쉬운 제어를 위한 라이브러리 추가
Servo servo1;  //  서보모터 제어하기 위한 Servo 객체생성 / 변수 선언

const int servoPin = 9;  //  PWM 가용핀(9번 핀)에 서보 모터 연결
const int angle_i = 0;  //  초기 각도값 설정

void setup() {
  servo1.attach(servoPin);  //  서보 모터의 입출력핀 지정
  servo1.write(angle_i);  //  전원 연결 후 서보모터 0도에 맞춰 입력 대기
}

void loop() {
  for (int i=0; i<180; i++)
  {
    servo1.write(i);
    delay(10);
  }
  for (int i =180; i>=0; i--)
  {
    servo1.write(i);
    delay(10);
  }
} 
