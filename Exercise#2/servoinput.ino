#include<Servo.h>  //  서보모터의 쉬운 제어를 위한 라이브러리 추가
Servo servo1;  //  서보모터 제어하기 위한 Servo 객체생성 / 변수 선언

const int servoPin = 9;  //  PWM 가용핀(9번 핀)에 서보 모터 연결
const int angle_i = 0;  //  초기 각도값 설정
int value = 0;

void setup() {
  Serial.begin(9600);  //  시리얼 모니터 사용
  servo1.attach(servoPin);  //  서보 모터의 입출력핀 지정
  servo1.write(angle_i);  //  전원 연결 후 서보모터 0도에 맞춰 입력 대기
}

void loop() {
  if (Serial.available()){
    value = Serial.parseInt();  //  시리얼 입력값 정수형으로 저장      
    Serial.print("input angle: ");
    Serial.println(value); //  시리얼 모니터로 입력받은 수 출력
    servo1.write(value);
    value = Serial.read();
    Serial.println(" ");
  }
} 
