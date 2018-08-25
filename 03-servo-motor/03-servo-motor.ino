#include <Servo.h>

Servo myServo;
int angle;

const int potPin = A0;

int potVal = 0;

void setup() {
  Serial.begin(9600);
  myServo.attach(9); // Servo on Pin 9
}

void loop() {
  potVal = analogRead(potPin);
  delay(5);
  
  Serial.print("Value is: ");
  Serial.print(potVal);

  angle = map(potVal, 0, 1023, 0, 179);

  Serial.print(" angle is: ");
  Serial.println(angle);
  
  myServo.write(angle);
  delay(15);

}
