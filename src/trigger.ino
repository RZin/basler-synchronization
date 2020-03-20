/*
  Trigger
*/

trigger_pin = 9; // micro
rate = 5;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(trigger_pin, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(trigger_pin, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(500/rate);                       // wait for a second
  digitalWrite(trigger_pin, LOW);    // turn the LED off by making the voltage LOW
  delay(500/rate);                       // wait for a second
}
