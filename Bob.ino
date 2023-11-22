//Creator: Rowan
//Date: Nov 22th
//purpose in life: To be a door that opens.
//THE NEXT TWO VARIABLES WILL BE FOR THE INPUT FOR THE MOTOR DRIVER
//Credit to ElectronicsHub for the project
int sensor = 8;
int input1 = 2;
int input2 = 3;
int Led = 13;

void setup() {
  pinMode(8, INPUT);
  pinMode(input1, OUTPUT);
  pinMode(input2, OUTPUT);
  pinMode(Led, OUTPUT);

  digitalWrite(input1, LOW);
  digitalWrite(input2, LOW);
  digitalWrite(Led, LOW);
  // wait until 13sec has passed

  while(millis() < 13000) {
    digitalWrite(Led, HIGH);
    delay(100);
    digitalWrite(Led, LOW);
    delay(100);
  }
  digitalWrite(Led, LOW);
  digitalWrite(input1, LOW);
  digitalWrite(input2, HIGH);

}

void loop() {
  // if the sensor is dectecting anything
  if (digitalRead(sensor) == HIGH) {
    digitalWrite(input1, HIGH);
    digitalWrite(input2, LOW);
    digitalWrite(Led, HIGH);
    delay(2000);
    digitalWrite(input1, LOW);
    digitalWrite(input2, LOW);


    digitalWrite(input1, LOW);
    digitalWrite(input2, HIGH);
    delay(2000);
    digitalWrite(input1, LOW);
    digitalWrite(input2, LOW);
  }
}
