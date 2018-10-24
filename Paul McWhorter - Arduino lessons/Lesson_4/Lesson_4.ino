int whiteLEDPin=9;  // Declaring redLEDPin as an int, and set it to 9
int redLEDPin=11; // Declaring whiteLEDPin as an int, and set it to 11
int whiteOnTime=500; // This is the white LED ontime
int whiteOffTime=500; // This is the white LED offtime
int redOnTime=250; // This is the red LED ontime
int redOffTime=250; // This is the red LED offtime
int numBlinkWhite=9; // Number of blinks white
int numBlinkRed=3; // Number of blinks red

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(whiteLEDPin, OUTPUT); // Tell arduino that whiteLEDPin is an output pin
  pinMode(redLEDPin, OUTPUT); // Tell arduino that redLEDPin is an output pin

}

void loop() {
  // put your main code here, to run repeatedly:

Serial.println("The white LED is blinking!");

  for (int j=1; j<=numBlinkWhite; j=j+1) {
     Serial.print("Eat shit! ");
     Serial.print("You are on Blink #: ");
     Serial.println(j);
     digitalWrite(whiteLEDPin, HIGH);  // Turn the white LED on
     delay(whiteOnTime);  // Wait
     digitalWrite(whiteLEDPin, LOW);  // Turn the white LED off
     delay(whiteOffTime);  // Wait
  }

  Serial.println(" ");

  for (int j=1; j<=numBlinkRed; j=j+1) {
    digitalWrite(redLEDPin, HIGH);  // Turn the red LED on
    delay(redOnTime);  // Wait
    digitalWrite(redLEDPin, LOW);  // Turn the red LED off
    delay(redOffTime);  // Wait
  }
  
}
