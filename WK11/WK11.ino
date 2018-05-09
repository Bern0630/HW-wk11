
int LED_PIN1 = 13;
int LED_PIN2 = 12;
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_PIN1, OUTPUT);
  pinMode(LED_PIN2, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED_PIN1,HIGH);
  digitalWrite(LED_PIN2,LOW);
  delay(500);               // wait for a second
  digitalWrite(LED_PIN1,LOW);
  digitalWrite(LED_PIN2,HIGH);
  delay(500);                       // wait for a second
}
