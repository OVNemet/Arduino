/*
Lab 2 : traffic light with pedestrian light

Switch on and off three LEDs to build a traffic light as follow:
- green LED for 3 seconds
- orange LED for 1 second
- red LED for 3 seconds

*/

// our three pin numbers to which LEDs are attached to
int led_traffic_green = 10;
int led_traffic_orange = 11;
int led_traffic_red = 12;
int led_pedestrian_red = 9;
int led_pedestrian_green = 8;
int button_pedestrian = 2;

// the setup function runs once when you press reset or power the board
void setup()
{
// initialize leds as outputs:
pinMode(led_traffic_red, OUTPUT);
pinMode(led_traffic_orange, OUTPUT);
pinMode(led_traffic_green, OUTPUT);
pinMode(led_pedestrian_red, OUTPUT);
pinMode(led_pedestrian_green, OUTPUT);
// initialize button as input:
pinMode(button_pedestrian, INPUT);
}

// the loop function runs over and over again forever
void loop()
{
// pedestrian led is always red at beginning
digitalWrite(led_pedestrian_red, HIGH); // turn the LED on (HIGH is the voltage level)

digitalWrite(led_traffic_green, HIGH); // turn the LED on (HIGH is the voltage level)
delay(3000); // wait for 3 seconds
digitalWrite(led_traffic_green, LOW); // turn the LED off by making the voltage LOW

//if button is pressed (high) the traffic lights change behavior
if (button_pedestrian = HIGH)
{
digitalWrite(led_traffic_orange, HIGH); // turn the LED on (HIGH is the voltage level)
delay(1000); // wait for 1 second
digitalWrite(led_traffic_orange, LOW); // turn the LED off by making the voltage LOW

digitalWrite(led_traffic_red, HIGH); // turn the LED on (HIGH is the voltage level)
digitalWrite(led_pedestrian_red, LOW); // turn the pedestrian red led off
digitalWrite(led_pedestrian_green, HIGH); // turn the pedestrian green led on
delay(5000); // wait for 5 seconds
digitalWrite(led_traffic_red, LOW); // turn the LED off by making the voltage LOW
digitalWrite(led_pedestrian_red, HIGH); // turn the pedestrian red led on
digitalWrite(led_pedestrian_green, LOW); // turn the pedestrian green led off
}
else // button not pressed
{
digitalWrite(led_traffic_orange, HIGH); // turn the LED on (HIGH is the voltage level)
delay(1000); // wait for 1 second
digitalWrite(led_traffic_orange, LOW); // turn the LED off by making the voltage LOW

digitalWrite(led_traffic_red, HIGH); // turn the LED on (HIGH is the voltage level)
delay(3000); // wait for 3 seconds
digitalWrite(led_traffic_red, LOW); // turn the LED off by making the voltage LOW
}

} // end of program
