void setup() {
  // put your setup code here, to run once:

  Serial.begin(115200);

}

void loop() {
  // put your main code here, to run repeatedly:

  int j=0;  // Declare that j is an int and set it equal to 1

  while (j<=100) {
    Serial.print("You are on loop number: ");
    Serial.println(j);
    j=j+5;
    delay(250);
  }

  Serial.println(" ");
  

}
