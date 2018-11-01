//Declaring the constants:

const int buttonPin = 2; //Number of the pin connected to the push-button

const int redLEDCars = 12; //Number of the pin connected to the red LED of the cars traffic light
const int orangeLEDCars = 11; //Number of the pin connected to the orange LED of the cars traffic light
const int greenLEDCars = 10; //Number of the pin connected to the green LED of the cars traffic light

const int redLEDpedestrian = 9; //Number of the pin connected to the red LED of the pedestrian light
const int greenLEDpedestrian = 8; //Number of the pin connected to the green LED of the pedestrian light

//Declaring the variables:

int buttonState = 0; //The variable 'buttonState' will be used to store the state of the button

//The code is executed once on boot-up

void setup() {

// setting outputs:

pinMode(redLEDCars, OUTPUT); //redLEDCars is an output
pinMode(orangeLEDCars, OUTPUT); //orangeLEDCars is an output
pinMode(greenLEDCars, OUTPUT); //greenLEDCars is an output

pinMode(redLEDpedestrian, OUTPUT); //redLEDpedestrian is an output
pinMode(greenLEDpedestrian, OUTPUT); //greenLEDpedestrian is an output

// setting inputs:

pinMode(buttonPin,INPUT); //buttonPin is an input
}

//This code is executed over and over again as a loop:

void loop() {

digitalWrite(redLEDpedestrian, HIGH); // Turn on the Red pedestrian LED
digitalWrite(greenLEDCars, HIGH); // Turn on the Green traffic LED
delay(3000); // Pause the program for 3000 miliseconds = 3 seconds
digitalWrite(greenLEDCars, LOW); // Turn off the Green traffic LED

buttonState = digitalRead(buttonPin); // read the state of the button and store in buttonState

// Check to see if buttonState is HIGH (5V), i.e., if the button is pressed during the instant when the car traffic light is changing from green to orange
if (buttonState == HIGH) {

digitalWrite(orangeLEDCars, HIGH); // Turn on the Orange traffic LED
delay(1000); // Pause the program for 1000 miliseconds = 1 seconds
digitalWrite(orangeLEDCars, LOW); // Turn off the Orange traffic LED
digitalWrite(redLEDCars, HIGH); // Turn on the Red traffic LED
digitalWrite(redLEDpedestrian, LOW); // Turn off the Red pedestrian LED
digitalWrite(greenLEDpedestrian, HIGH); // Turn on the Green pedestrian LED
delay(5000); // Pause the program for 5000 miliseconds = 5 seconds
digitalWrite(greenLEDpedestrian, LOW); // Turn off the Green pedestrian LED
digitalWrite(redLEDCars, LOW); // Turn off the Red traffic LED
}

// if the button is not pressed, keep looping the traffic light and keeping the red pedestrian light off
else {
digitalWrite(orangeLEDCars, HIGH); // Turn on the Orange traffic LED
delay(1000); // Pause the program for 1000 miliseconds = 1 seconds
digitalWrite(orangeLEDCars, LOW); // Turn off the Orange traffic LED
digitalWrite(redLEDCars, HIGH); // Turn on the Red traffic LED
delay(3000); // Pause the program for 3000 miliseconds = 3 seconds
digitalWrite(redLEDCars, LOW); // Turn off the Red traffic LED

}
}
