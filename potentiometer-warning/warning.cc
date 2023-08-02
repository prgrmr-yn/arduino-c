int myPin = A2;
int readVal;
float V2;
int pause = 1000;
int redPin = 9;

void setup() {
  Serial.begin(9600);
  pinMode(myPin, INPUT);
  pinMode(redPin, OUTPUT);

}

void loop() {
  readVal = analogRead(myPin);
  V2 = (5./1023.) * readVal;
 Serial.print("Potentiometer voltage is ");
 Serial.println(V2);
  if (V2 > 4.0){
    digitalWrite(redPin, HIGH);
    Serial.println("Hey Back off potentiometer");
  } else {
    digitalWrite(redPin, LOW);
    Serial.println("Good job, Keep it under 4.0 voltage");
  }
  delay(pause);

}
