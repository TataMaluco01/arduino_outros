int ledgreen=0;
int ledblue=1;
int ledred=2;
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(ledgreen, OUTPUT);
  pinMode(ledblue, OUTPUT);
  pinMode(ledred, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(ledgreen, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(500);                       // wait for a second
  digitalWrite(ledgreen, LOW);    // turn the LED off by making the voltage LOW
  delay(250);                       // wait for a second
  digitalWrite(ledblue, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(500);                       // wait for a second
  digitalWrite(ledblue, LOW);    // turn the LED off by making the voltage LOW
  delay(250);                       // wait for a second
  digitalWrite(ledred, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(500);                       // wait for a second
  digitalWrite(ledred, LOW);    // turn the LED off by making the voltage LOW
  delay(250);                       // wait for a second
}
