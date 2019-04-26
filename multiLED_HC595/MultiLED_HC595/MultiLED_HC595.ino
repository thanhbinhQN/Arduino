/*
shiftOut với 8 LED bằng 1 IC HC595
*/

//chân SH_CP của 74HC595
int clockPin = 8;
//Chân DS của 74HC595
int dataPin = 10;
//chân ST_CP của 74HC595
int latchPin = 9;
#define MR 7

void setup() {
  //Bạn BUỘC PHẢI pinMode các chân này là OUTPUT
  pinMode(latchPin, OUTPUT);
  pinMode(clockPin, OUTPUT);
  pinMode(dataPin, OUTPUT);
  pinMode(MR,OUTPUT);
  digitalWrite(MR,HIGH);
}

void loop(){
  
  shiftOut(dataPin, clockPin, MSBFIRST, 0b11110000);
  shiftOut(dataPin, clockPin, MSBFIRST, 0b11000011);
  shiftOut(dataPin, clockPin, MSBFIRST, 0b00001111);
  digitalWrite(latchPin, HIGH);
  while(1){}

}
