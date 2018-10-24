int LEDPin=9;  // Assigning LEDPin to 9
int potPin=A0; // Declare potPin to the analog pin A0
int readValue;  // Use this variable to read potentiometer
int writeValue; // Variable for writing to LED

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); // Start your serial port
  pinMode(potPin,INPUT);  // Declare potPin an input
  pinMode(LEDPin, OUTPUT); // Declare LEDPin to be an output
  
}

void loop() {
  // put your main code here, to run repeatedly:

  readValue=analogRead(potPin); // Read voltage from potentiometer
  writeValue=(255.0/1023.0)*readValue; // Calculating the real world voltage
  analogWrite(LEDPin, writeValue);  // Write to LED
  Serial.print("You are writing the value of: ");
  Serial.println(writeValue);  // Print results to serial monitor
  delay(250); // Delay 250 miliseconds
  
}
