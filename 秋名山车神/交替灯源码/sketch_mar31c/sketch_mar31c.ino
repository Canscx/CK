#define led1 13
#define led2 12

void setup() {
pinMode(led1,1);
pinMode(led2,1);
}

void loop() {
digitalWrite(led1,1);
delay(20);
digitalWrite(led1,0);
delay(100);
digitalWrite(led1,1);
delay(20);
digitalWrite(led1,0);
delay(1000);
digitalWrite(led2,1);
delay(20);
digitalWrite(led2,0);
delay(100);
digitalWrite(led2,1);
delay(20);
digitalWrite(led2,0);
delay(1000);
}
