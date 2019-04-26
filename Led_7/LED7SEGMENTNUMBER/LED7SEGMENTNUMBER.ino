
bool led7seg[10][7]=
{
  1,1,1,1,1,1,0,
  0,1,1,0,0,0,0,
  1,1,0,1,1,0,1,
  1,1,1,1,0,0,1,
  0,1,1,0,0,1,1,
  1,0,1,1,0,1,1,
  1,0,1,1,1,1,1,
  1,1,1,0,0,0,0,
  1,1,1,1,1,1,1,
  1,1,1,1,0,1,1,
};
void setup() 
{
  for(int i=3; i<=9; i++) pinMode(i,OUTPUT);
}
void on (byte n)
{
  for (int i=3; i<=9; i++)
  digitalWrite(i,led7seg[n][i-3]);
}
void loop() 
{
  for(byte k=0; k<=9; k++)
  {
    on(k);
    delay(1000);
  }
}
