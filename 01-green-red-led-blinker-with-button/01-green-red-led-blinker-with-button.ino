int buttonState = 0;

int buttonPin = 2;
int greenLedPin = 3;
int redLed1Pin = 4;
int redLed2Pin = 5;

void setup() {
  pinMode(greenLedPin, OUTPUT);
  pinMode(redLed1Pin, OUTPUT);
  pinMode(redLed2Pin, OUTPUT);
  pinMode(buttonPin, INPUT); 

}

void loop() {
  buttonState = digitalRead(buttonPin);

  if (buttonState == LOW) {
    digitalWrite(greenLedPin, HIGH);
    digitalWrite(redLed1Pin, LOW);  
    digitalWrite(redLed2Pin, LOW);  
  } else {
    digitalWrite(greenLedPin, LOW);
    digitalWrite(redLed1Pin, LOW);
    digitalWrite(redLed2Pin, HIGH);

    delay(100);

    digitalWrite(redLed1Pin, HIGH);
    digitalWrite(redLed2Pin, LOW);

    delay(100);
  }
}

