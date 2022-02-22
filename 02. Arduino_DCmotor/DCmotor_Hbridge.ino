const int input1=5;
const int input2=6;    // input pin number 설정
float A=0;
float t=0;    // 계산에 이용될 변수 정의
int f=5;    // frequency : 5Hz
void setup()
{
  Serial.begin(9600);
  Serial.print("Frequency : ");
  Serial.print(f);
  Serial.println("Hz");   // 지정된 frequency 출력
}

void loop()
{
  A=sin(2*3.14*f*t);  //방향조건 임의 설정, w=2*pi*f
  if(A>0)
  {
    analogWrite(input1,128);
    analogWrite(input2,0);    // A가 양수일때 정방향(counterclockwise)으로 duty비 128만큼 회전
  }
  else{
    analogWrite(input1,0);
    analogWrite(input2,64);   // A가 양수가 아닐 때 역방향(clockwise)으로 duty비 64만큼 회전
  }
  t=t+0.01;   // 계산에 이용할 t값을 delay에 맞게 설정
  delay(10);  // 10밀리초(0.01초)마다 loop문 반복
}
