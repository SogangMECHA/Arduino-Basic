const int led1=6;
const int led2=7;
const int led4=8;
const int led16=9;
const int led32=10;
const int led64=11;
const int led128=12;
const int led256=13;
const int button=2;
int count=0;
int buttonstate=0;

void setup(){
  pinMode(button, INPUT);
  for (int i=6;i<=13;i++){
    pinMode(i,OUTPUT);
  }
  Serial.begin(9600);
}

void loop(){
  buttonstate=digitalRead(button);
  if(buttonstate==HIGH){
    count++;
    Serial.println(count);
    for(int i=0;i<8;i++){
      if(bitRead(count,i)==1){
        digitalWrite(i+6,HIGH);
      }
      else{
        digitalWrite(i+6,LOW);
      }
    }
    delay(200);
  }
}
