/* Main.ino file generated by New Project wizard
 *
 * Created:   T7 Thg4 6 2019
 * Processor: Arduino Uno
 * Compiler:  Arduino AVR (Proteus)
 */
// Khai báo chân
#define DP 9 // DP = Arduino chân 9 

#define SECOND 1000 // 1000 milliseconds = 1 second
#define DIGIT 10 // Display 10 digits (0 - 9)
#define SEGMENT 7 // Segments of LED (7) 
// define segments(led) HIGH 
bool digseg[DIGIT][SEGMENT] = { 
{ 1,1,1,1,1,1,0 }, // = 0
{ 0,1,1,0,0,0,0 }, // = 1
{ 1,1,0,1,1,0,1 }, // = 2
{ 1,1,1,1,0,0,1 }, // = 3
{ 0,1,1,0,0,1,1 }, // = 4
{ 1,0,1,1,0,1,1 }, // = 5
{ 1,0,1,1,1,1,1 }, // = 6
{ 1,1,1,0,0,0,0 }, // = 7
{ 1,1,1,1,1,1,1 }, // = 8
{ 1,1,1,1,0,1,1 } // = 9
};
void setup() { 
// Khai bao cac chan xuat tin hieu OUTPUT

for (byte pin=2; pin<10; pin++){
  pinMode(pin, OUTPUT);
}
digitalWrite(DP, LOW); // Tat dau cham
}
// Loop through all 7 LED segments starting with pin 2 
void writeDigit(byte digit) 
{

for (byte pin = 2; pin < 9; pin++) 
{
  digitalWrite(pin, digseg[digit][pin-2]);
}
}
void loop() 
{
for (byte digit=0; digit < 10; digit++) 
{
writeDigit(digit); 
delay(SECOND); 
}
delay(4*SECOND);
}
