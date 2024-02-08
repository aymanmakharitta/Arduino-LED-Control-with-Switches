// C++ code
//
int button1=8;
int button2=2;
int led1=10;
int led2=9;
int led3=3;
int led4=4;
void setup()
{
  pinMode(button1,INPUT);  pinMode(button2,INPUT);
pinMode(led1,OUTPUT);pinMode(led2,OUTPUT);
pinMode(led3,OUTPUT);pinMode(led4,OUTPUT);
}

void loop()
{
  if (digitalRead(button1)==HIGH){
  analogWrite(led1,125);digitalWrite(led2,HIGH);}
  else {analogWrite(led1,0);digitalWrite(led2,LOW);}
  
  if (digitalRead(button2)==HIGH){
  analogWrite(led3,125);digitalWrite(led4,HIGH);}
  else {analogWrite(led3,0);digitalWrite(led4,LOW);}
}