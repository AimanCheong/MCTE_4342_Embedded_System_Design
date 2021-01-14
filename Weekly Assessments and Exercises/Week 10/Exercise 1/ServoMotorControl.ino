#include <Servo.h>
Servo servo;
int Potentiometer = A0;

void setup() {
  servo.attach(5);
  pinMode(Potentiometer, INPUT);
  Serial.begin(9600);
}

void loop() {
  int input = analogRead(Potentiometer);
  int val = map(input, 0, 1023, 0, 180);

  servo.write(val);
  delay(15);
  Serial.print(input);
  Serial.print("  ");
  Serial.println(val);
}
