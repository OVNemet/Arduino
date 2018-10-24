int redLED=9;
int onTimeRed=100;
int offTimeRed=100;

int yellowLED=3;
int onTimeYellow=100;
int offTimeYellow=500;

void setup() {
  // put your setup code here, to run once:
  pinMode(redLED,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(redLED,HIGH);
  delay(onTimeRed);
  digitalWrite(redLED,LOW);
  delay(offTimeRed);

  digitalWrite(yellowLED,HIGH);
  delay(onTimeYellow);
  digitalWrite(yellowLED,LOW);
  delay(offTimeYellow);
  
}
