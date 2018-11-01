// assign variables

// constants won't change. They're used here to set pin numbers:
const int greenLedPedestrian = 8; // the number of the LED pin
const int redLedPedestrian = 9; // the number of the LED pin

const int greenLedTraffic = 10; // the number of the LED pin
const int orangeLedTraffic = 11;  // the number of the LED pin
const int redLedTraffic = 12; // the number of the LED pin

const int buttonPin = 2;     // the number of the pushbutton pin

// variables will change:
int buttonState = 0;         // variable for reading the pushbutton status

void setup() {
  // initialize digital pins as outputs for the pedestrian leds
  pinMode(greenLedPedestrian, OUTPUT);
  pinMode(redLedPedestrian, OUTPUT);
  
  // initialize digital pins as outputs for the traffic leds
  pinMode(greenLedTraffic, OUTPUT);
  pinMode(orangeLedTraffic, OUTPUT);
  pinMode(redLedTraffic, OUTPUT);

  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);
}


void loop() {
  // put your main code here, to run repeatedly:

  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);

  // red pedestrian
  digitalWrite(redLedPedestrian, HIGH); // turn and keep the red LED pedestrian on (HIGH is the voltage level)
  
  // green traffic
  digitalWrite(greenLedTraffic, HIGH); // turn the green LED traffic on (HIGH is the voltage level)
  delay(3000); // wait for 3 seconds
  digitalWrite(greenLedTraffic, LOW); // turn the green LED traffic off (LOW is the voltage level)

  // yellow traffic
  digitalWrite(orangeLedTraffic, HIGH); // turn the orange LED traffic on (HIGH is the voltage level)
  delay(1000); // wait for a second
  
  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (buttonState == HIGH) {
      digitalWrite(greenLedPedestrian, LOW);
      }
  else {
      digitalWrite(redLedPedestrian, LOW); // turn the red LED pedestrian off (LOW is the voltage level)
      digitalWrite(greenLedPedestrian, HIGH); // turn the green LED pedestrian on (HIGH is the voltage level)
      digitalWrite(orangeLedTraffic, LOW); // turn the orange LED traffic off (LOW is the voltage level)
      digitalWrite(redLedTraffic, HIGH); // turn the red LED traffic on (HIGH is the voltage level)
      delay(5000); // wait for 5 seconds
      digitalWrite(redLedPedestrian, HIGH); // turn the red LED pedestrian on again (HIGH is the voltage level)
      digitalWrite(greenLedPedestrian, LOW); // turn the green LED pedestrian off again (LOW is the voltage level)
      }
  digitalWrite(orangeLedTraffic, LOW); // turn the orange LED traffic off (LOW is the voltage level)

  // red traffic
  digitalWrite(redLedTraffic, HIGH); // turn the red LED traffic on (HIGH is the voltage level)
  delay(3000); // wait for 3 seconds
  digitalWrite(redLedTraffic, LOW); // turn the red LED traffic off (LOW is the voltage level)
}
