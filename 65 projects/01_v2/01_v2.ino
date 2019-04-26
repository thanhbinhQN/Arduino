#define d 200
void setup() {
pinMode(2, OUTPUT); // LED 1 control pin is set up as an output
pinMode(3, OUTPUT); // same for LED 2 to LED 5
pinMode(4, OUTPUT);
pinMode(5, OUTPUT);
pinMode(6, OUTPUT);

}

void loop() {
for (int p=2; p<7; p++){
digitalWrite(p, HIGH);
delay(d);
digitalWrite(p, LOW);
delay(d);
}
for (int p=5; p>2; p--){
digitalWrite(p, HIGH);
delay(d);
digitalWrite(p, LOW);
delay(d);
}
}
