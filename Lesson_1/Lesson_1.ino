int LEDPin=13;
int waitTimeOn=100;
int waitTimeOff=900;


void setup() {
  // put your setup code here, to run once:
  pinMode(LEDPin,OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(LEDPin,HIGH);
  delay(waitTimeOn);
  digitalWrite(LEDPin,LOW);
  delay(waitTimeOff);

}
