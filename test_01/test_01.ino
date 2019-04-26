void setup() {
  // put your setup code here, to run once:
  for (int i = 6; i <= 10; i++)
  {
    pinMode(i, OUTPUT);
  }
}
void loop(){
  for (int i=0;i<=255;i++){
  analogWrite(6,i);
  delay(50);
  }
}
/*
void vongtron()
{
  for (int i = 6; i <= 10; i++)
  {
    digitalWrite(i, HIGH);
    delay(100);
    digitalWrite(i, LOW);
    delay(100);
  }
  for (int i = 10; i >= 6; i--)
  {
    digitalWrite(i, HIGH);
    delay(100);
    digitalWrite(i, LOW);
    delay(100);
  }
}

void delay1()
{
  for(int i=6; i<=10; i++)
  {
    digitalWrite(i,HIGH);
  }
  delay(100);
  for(int i=6; i<=10; i++)
  digitalWrite(i,LOW);
  delay(1000);
}
void loop() {
  // put your main code here, to run repeatedly:
  for (int i = 1; i <= 3; i++)
    vongtron();
  delay(1000);
  for (int i = 1; i <= 3; i++)
  delay1();

}
*/
