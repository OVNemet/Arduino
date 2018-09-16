String myName; // Declare a string variable to hold name
int age;  //  Declare int variable to hold age
float height; // Declare float variable to hold height

void setup() {
  // put your setup code here, to run once:
  
  Serial.begin(9600); // Start your serial port

  
  
}

void loop() {
  // put your main code here, to run repeatedly:

  Serial.println("Please enter your name: "); // Prompt the use for his name
  
  while (Serial.available()==0) { //  Waiting for user input
    }

  myName=Serial.readString(); // Read the string


  Serial.println("Please enter your age: "); // Prompt the use for his age
  
  while (Serial.available()==0) { //  Waiting for user input
    }

  age=Serial.parseInt(); // Read the int


  Serial.println("Please enter your height: "); // Prompt the use for his height
  
  while (Serial.available()==0) { //  Waiting for user input
    }

  height=Serial.parseFloat(); // Read the float

  Serial.print("Hello ");  //  Produce nicely formated output
  Serial.print(myName);
  Serial.print(", you are: ");
  Serial.print(age);
  Serial.println(" years old. ");
  Serial.print("You are ");
  Serial.print(height);
  Serial.println(" off height.");
  
  
}
