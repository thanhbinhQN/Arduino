#define d 100
void setup() {
pinMode(3, OUTPUT); // LED 1 control pin is set up as an output
}

void loop() {
for (int a=0; a<256; a++){
analogWrite(3, a);
delay(d);
}
for (int a=255; a>=0; a--){
analogWrite(3, a);
delay(d);
}
delay(1000);
}
