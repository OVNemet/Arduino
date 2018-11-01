//Declaring Constants
int green = 10; //pin number of the green taffic light LED
int orange = 11; //pin number of the orange traffic light LED
int redPin = 12; //pin number of the red traffic light LED
int redLed = 9; //pin number of the redled pedestrian led
int greenLed = 8; // pinnumber of the green pedestrian led
int buttonState = 0; // This variable stores the button state
int button = 2; // stores the pin number in variable button

// this code excutes once at boot time
void setup() {
pinMode(red, OUTPUT); //red taffic led mode
pinMode(green, OUTPUT); // orange traffic led mode
pinMode(orange, OUTPUT); //green traffic led mode
pinMode(redLed, OUTPUT); // red pedestrian led mode
pinMode(greenLed, OUTPUT); // green pedestrian led mode
pinMode(button, INPUT); // button mode

}

// This code executes repeatedily

void loop() {

digitalWrite(redLed, HIGH); // turns on red pedestrian led on
digitalWrite(green, HIGH); // turns on green traffic light led on for 3 sec.
delay(3000);
digitalWrite(green, LOW);
buttonState = digitalRead(button); // reads the button state and stores in a variable

if(buttonState == HIGH)
{
// turns on orange traffic light led on for 1s.
digitalWrite(orange, HIGH);
delay(1000);
digitalWrite(orange, LOW);
// turns on red traffic light led
digitalWrite(red, HIGH);
digitalWrite(redLed, LOW); // turns off red pedestrian led off
digitalWrite(greenLed, HIGH); // turns on green pedestrian led for 5 s
delay(5000);
//turns off pedestrian green led and turns on red pedestrian led
digitalWrite(greenLed, LOW);
digitalWrite(redLed, HIGH);
}
else
{
// if the button is not pressed rest of the traffic light system continue as such
digitalWrite(orange, HIGH);
delay(1000);
digitalWrite(orange, LOW);

digitalWrite(red, HIGH);
delay(3000);
digitalWrite(red, LOW);
}

}
