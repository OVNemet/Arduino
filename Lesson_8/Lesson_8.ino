int whiteLEDPin=9;  // Declaring redLEDPin as an int, and set it to 9
int redLEDPin=11; // Declaring whiteLEDPin as an int, and set it to 11
int whiteOnTime=5000; // This is the white LED ontime
int whiteOffTime=500; // This is the white LED offtime
int redOnTime=250; // This is the red LED ontime
int redOffTime=250; // This is the red LED offtime
int numBlinkWhite=5; // Number of blinks white
int numBlinkRed=5; // Number of blinks red
String whiteMessage="The white LED is blinking";  // Declaring a string variable
String redMessage="The red LED is blinking";  // Declaring a string variable
int writeValueWhite;  //  Declare value for white LED
int writeValueRed;  // Declare value for red LED

void setup() {
  // put your setup code here, to run once:
  
  Serial.begin(115200);
  pinMode(whiteLEDPin, OUTPUT); // Tell arduino that whiteLEDPin is an output pin
  pinMode(redLEDPin, OUTPUT); // Tell arduino that redLEDPin is an output pin

Serial.println("What number do you want to write to the white LED (0-255)? ");  // Prompt user for input
while (Serial.available()==0){ }; // Wait for user input
writeValueWhite=Serial.parseInt();  // Read user input

Serial.println("What number do you want to write to the red LED (0-255)? ");  // Prompt user for input
while (Serial.available()==0){ }; // Wait for user input
writeValueRed=Serial.parseInt();  // Read user input

}

void loop() {
  // put your main code here, to run repeatedly:

Serial.println(whiteMessage);
  int j=1;
  while (j<=numBlinkWhite) {
     Serial.print("You are on Blink #: ");
     Serial.println(j);
     analogWrite(whiteLEDPin, writeValueWhite);  // Apply analog voltage to white LED
     delay(whiteOnTime);  // Wait
     analogWrite(whiteLEDPin, 0);  // Turn the white LED off
     delay(whiteOffTime);  // Wait
     j=j+1;
  }

Serial.println(" ");

Serial.println(redMessage);
  int i=1;
  while (i<=numBlinkRed) {
    Serial.print("You are on Blink #: ");
    Serial.println(i);
    analogWrite(redLEDPin, writeValueRed);  // Apply analog voltage to the red LED
    delay(redOnTime);  // Wait
    analogWrite(redLEDPin, 0);  // Turn the red LED off
    delay(redOffTime);  // Wait
    i=i+1;
  }

Serial.println(" ");

}
