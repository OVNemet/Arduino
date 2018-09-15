int whiteLEDPin=9;  // Declaring redLEDPin as an int, and set it to 9
int redLEDPin=11; // Declaring whiteLEDPin as an int, and set it to 11
int whiteOnTime=500; // This is the white LED ontime
int whiteOffTime=500; // This is the white LED offtime
int redOnTime=250; // This is the red LED ontime
int redOffTime=250; // This is the red LED offtime
int numBlinkWhite; // Number of blinks white
int numBlinkRed; // Number of blinks red
String whiteMessage="The white LED is blinking";  // Declaring a string variable
String redMessage="The red LED is blinking";  // Declaring a string variable

void setup() {
  // put your setup code here, to run once:
  
  Serial.begin(115200);
  pinMode(whiteLEDPin, OUTPUT); // Tell arduino that whiteLEDPin is an output pin
  pinMode(redLEDPin, OUTPUT); // Tell arduino that redLEDPin is an output pin

Serial.println("How many times do you want the white LED to blink? ");
while (Serial.available()==0){ };
numBlinkWhite=Serial.parseInt();

Serial.println("How many times do you want the red LED to blink? ");
while (Serial.available()==0){ };
numBlinkRed=Serial.parseInt();

}

void loop() {
  // put your main code here, to run repeatedly:

Serial.println(whiteMessage);
  int j=1;
  while (j<=numBlinkWhite) {
     Serial.print("You are on Blink #: ");
     Serial.println(j);
     digitalWrite(whiteLEDPin, HIGH);  // Turn the white LED on
     delay(whiteOnTime);  // Wait
     digitalWrite(whiteLEDPin, LOW);  // Turn the white LED off
     delay(whiteOffTime);  // Wait
     j=j+1;
  }

Serial.println(" ");

Serial.println(redMessage);
  int i=1;
  while (i<=numBlinkRed) {
    Serial.print("You are on Blink #: ");
    Serial.println(i);
    digitalWrite(redLEDPin, HIGH);  // Turn the red LED on
    delay(redOnTime);  // Wait
    digitalWrite(redLEDPin, LOW);  // Turn the red LED off
    delay(redOffTime);  // Wait
    i=i+1;
  }

Serial.println(" ");

}
