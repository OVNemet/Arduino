// assign variables
int greenLed = 10;
int orangeLed = 11;
int redLed = 12;

void setup() {
  // initialize digital pin 2, 3 and 4 as an output.
  pinMode(greenLed, OUTPUT);
  pinMode(orangeLed, OUTPUT);
  pinMode(redLed, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  
  // green
  digitalWrite(greenLed, HIGH); // turn the green LED on (HIGH is the voltage level)
  delay(3000); // wait for a second
  digitalWrite(greenLed, LOW); // turn the green LED off (LOW is the voltage level)

  // yellow
  digitalWrite(orangeLed, HIGH); // turn the orange LED on (HIGH is the voltage level)
  delay(1000); // wait for a second
  digitalWrite(orangeLed, LOW); // turn the orange LED off (LOW is the voltage level)

  // red
  digitalWrite(redLed, HIGH); // turn the red LED on (HIGH is the voltage level)
  delay(3000); // wait for a second
  digitalWrite(redLed, LOW); // turn the red LED off (LOW is the voltage level)
}
