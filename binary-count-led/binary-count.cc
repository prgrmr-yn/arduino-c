// C++ code
//
int redLed=13;
int greenLed=12;
int blueLed=11;
int yellowLed=10;
int longDel=1000;

void setup(){
  pinMode(redLed, OUTPUT);
  pinMode(greenLed, OUTPUT);
  pinMode(blueLed, OUTPUT);
  pinMode(yellowLed, OUTPUT);
}

void loop(){
  digitalWrite(redLed, LOW);
  digitalWrite(greenLed, LOW);
  digitalWrite(blueLed, LOW);
  digitalWrite(yellowLed, LOW);
  delay(longDel); // Wait for longDel millisecond(s)

  digitalWrite(redLed, LOW);
  digitalWrite(greenLed, LOW);
  digitalWrite(blueLed, LOW);
  digitalWrite(yellowLed, HIGH);
  delay(longDel); // Wait for longDel millisecond(s)

  digitalWrite(redLed, LOW);
  digitalWrite(greenLed, LOW);
  digitalWrite(blueLed, HIGH);
  digitalWrite(yellowLed, LOW);
  delay(longDel);

  digitalWrite(redLed, LOW);
  digitalWrite(greenLed, LOW);
  digitalWrite(blueLed, HIGH);
  digitalWrite(yellowLed, HIGH);
  delay(longDel); // Wait for longDel millisecond(s)

  digitalWrite(redLed, LOW);
  digitalWrite(greenLed, HIGH);
  digitalWrite(blueLed, LOW);
  digitalWrite(yellowLed, LOW);
  delay(longDel);

  digitalWrite(redLed, LOW);
  digitalWrite(greenLed, HIGH);
  digitalWrite(blueLed, LOW);
  digitalWrite(yellowLed, HIGH);
  delay(longDel);

  digitalWrite(redLed, LOW);
  digitalWrite(greenLed, HIGH);
  digitalWrite(blueLed, HIGH);
  digitalWrite(yellowLed, LOW);
  delay(longDel);

  digitalWrite(redLed, LOW);
  digitalWrite(greenLed, HIGH);
  digitalWrite(blueLed, HIGH);
  digitalWrite(yellowLed, HIGH);
  delay(longDel);

  digitalWrite(redLed, HIGH);
  digitalWrite(greenLed, LOW);
  digitalWrite(blueLed, LOW);
  digitalWrite(yellowLed, LOW);
  delay(longDel);

  digitalWrite(redLed, HIGH);
  digitalWrite(greenLed, LOW);
  digitalWrite(blueLed, LOW);
  digitalWrite(yellowLed, HIGH);
  delay(longDel);

  digitalWrite(redLed, HIGH);
  digitalWrite(greenLed, LOW);
  digitalWrite(blueLed, HIGH);
  digitalWrite(yellowLed, LOW);
  delay(longDel);

  digitalWrite(redLed, HIGH);
  digitalWrite(greenLed, LOW);
  digitalWrite(blueLed, HIGH);
  digitalWrite(yellowLed, HIGH);
  delay(longDel);

  digitalWrite(redLed, HIGH);
  digitalWrite(greenLed, HIGH);
  digitalWrite(blueLed, LOW);
  digitalWrite(yellowLed, LOW);
  delay(longDel);

  digitalWrite(redLed, HIGH);
  digitalWrite(greenLed, HIGH);
  digitalWrite(blueLed, LOW);
  digitalWrite(yellowLed, HIGH);
  delay(longDel);

  digitalWrite(redLed, HIGH);
  digitalWrite(greenLed, HIGH);
  digitalWrite(blueLed, HIGH);
  digitalWrite(yellowLed, LOW);
  delay(longDel);

  digitalWrite(redLed, HIGH);
  digitalWrite(greenLed, HIGH);
  digitalWrite(blueLed, HIGH);
  digitalWrite(yellowLed, HIGH);
  delay(longDel);



}
