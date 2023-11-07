/*
  https://www.arduino.cc/en/Tutorial/BuiltInExamples/Blink
*/
#define LED_BLINK  13
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BLINK as an output.
  pinMode(LED_BLINK, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED_BLINK, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(LED_BLINK, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second
}
