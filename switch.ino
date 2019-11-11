int ledPin = 8;
int buttonPin = 12;
void setup() {
 pinMode(ledPin, OUTPUT);
 pinMode(buttonPin, INPUT_PULLUP);
}
void loop() {
 if (digitalRead(buttonPin) == LOW) {
 digitalWrite(ledPin, HIGH);
 }
 else {
 digitalWrite(ledPin, LOW);
 }
}
