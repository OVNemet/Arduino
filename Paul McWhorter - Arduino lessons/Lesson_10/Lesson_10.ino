int potPen=A0;  // Assignin potPen to A0
int readValue; // Declaring our readValue variable
float voltage;  // Declaring our voltage variable

void setup() {
  // put your setup code here, to run once:

  pinMode(potPen,INPUT);  // Declare potPen an input
  Serial.begin(9600); // Start your serial port
  

}

void loop() {
  // put your main code here, to run repeatedly:

  readValue=analogRead(potPen); // Read potPen and put value in readValue
  voltage=(5.0/1023.0)*readValue; // Calculating the real world voltage
  Serial.println(voltage);  // Print results to serial monitor
  delay(250); // Delay 250 miliseconds
  

}
