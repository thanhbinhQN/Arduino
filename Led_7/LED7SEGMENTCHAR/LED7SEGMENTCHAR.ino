bool ledchar[6][7]=
{
  1,1,1,0,1,1,1,
  1,1,1,1,1,1,1,
  1,0,0,1,1,1,0,
  1,1,1,1,1,1,0,
  1,0,0,1,1,1,1,
  1,0,0,0,1,1,1,
};
void setup()
{
  for(int i=3; i<=9; i++) pinMode(i,OUTPUT);
}
void on(byte n)
{
  for(int j=3; j<=9; j++)
  digitalWrite(j,ledchar[n][j-3]);
}
void loop()
{
  for(int i=0; i<=5; i++)
  {
    on(i);
    delay(1000);
  }
}
