// set up global variables
// a single "=" sets the value of the variable

// varibles for the LEDs
const int redLed1 = 5;
const int redLed2 = 7;
const int redLed3 = 9;
const int redLed4 = 11;
const int redLed5 = 13;
const int greenLed = 3;

// variable for the switch
const int switchPin = 2;

void setup() {
  // put your setup code here, to run once:
  
  // declare the LED pins as outputs
  pinMode(redLed1, OUTPUT);
  pinMode(redLed2, OUTPUT);
  pinMode(redLed3, OUTPUT);
  pinMode(redLed4, OUTPUT);
  pinMode(redLed5, OUTPUT);
  pinMode(greenLed, OUTPUT);

  // declare the switch pin as an input
  pinMode(switchPin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  /* create a local variable to hold the state of the switch.
  Unlike the global variables above, this is created and
  destroyed everytime the loop() runs*/
  int switchState;

  /* read the value of the switch. digitalRead() checks to see
  if there is voltage on the pin or not*/

  switchState = digitalRead(switchPin);

  /* an if() statement allows for evaluation of different
   *  situations when checking to see if a value is equal to somethingyou use
   *  
   *  if the buttong is not pressed blink the red LEDs
   */
  if(switchState == LOW) {
    // digitalWrite() is the function that pulls an OUTPUT pin to 5V or 0V

    // turn the green LED off
    digitalWrite(greenLed, LOW);

    // alternately turn the red lights on/off
    digitalWrite(redLed1, HIGH);
    digitalWrite(redLed2, LOW);
    digitalWrite(redLed3, LOW);
    digitalWrite(redLed4, LOW);
    digitalWrite(redLed5, LOW);

    // a delay() stops the program at the current place for the number of
    // millisecond you decide
    // 1000ms is the same as 1 second. 250ms is 1/4 second
    delay(100);

    digitalWrite(redLed1, LOW);
    digitalWrite(redLed2, HIGH);
    digitalWrite(redLed3, LOW);
    digitalWrite(redLed4, LOW);
    digitalWrite(redLed5, LOW);
    delay(100);

    digitalWrite(redLed1, LOW);
    digitalWrite(redLed2, LOW);
    digitalWrite(redLed3, HIGH);
    digitalWrite(redLed4, LOW);
    digitalWrite(redLed5, LOW);
    delay(100);

    digitalWrite(redLed1, LOW);
    digitalWrite(redLed2, LOW);
    digitalWrite(redLed3, LOW);
    digitalWrite(redLed4, HIGH);
    digitalWrite(redLed5, LOW);
    delay(100);

    digitalWrite(redLed1, LOW);
    digitalWrite(redLed2, LOW);
    digitalWrite(redLed3, LOW);
    digitalWrite(redLed4, LOW);
    digitalWrite(redLed5, HIGH);
    delay(100);
    
    }

    // this else is part of the above if() statement.
    // if the switch is not LOW (i.e. the button is pressed)
    // the code below will run
    else {
      // turn the red LEDs off
      digitalWrite(redLed1, LOW);
      digitalWrite(redLed2, LOW);
      digitalWrite(redLed3, LOW);
      digitalWrite(redLed4, LOW);
      digitalWrite(redLed5, LOW);

      // turn the green LED on
      digitalWrite(greenLed, HIGH);
      }
 
}
