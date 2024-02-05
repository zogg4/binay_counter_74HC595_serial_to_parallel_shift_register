int latchPin=11;
int clockPin=9;
int dataPin=12;
int delayTime=1000; // 1sec

byte LEDs=0b00000000;

void setup() {

Serial.begin(9600);
pinMode(latchPin,OUTPUT);
pinMode(dataPin,OUTPUT);
pinMode(clockPin,OUTPUT);

}

void loop() {

digitalWrite(latchPin,LOW);
shiftOut(dataPin,clockPin,LSBFIRST,LED1s);
digitalWrite(latchPin,HIGH);

Serial.println(LED1s,BIN);
delay(delayTime);
LEDs=LEDs+1;

}