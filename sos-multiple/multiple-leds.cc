


// C++ code
// SOS

int redLED=3;
int greenLED=4;
int blueLED=6;
int dit=50;
int dah=150;
int longDel=2000;

void setup()
{
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(6, OUTPUT);
}

void loop()
{
  digitalWrite(redLED, HIGH);
  delay(dit);
  digitalWrite(redLED, LOW);
  delay(dit);

  digitalWrite(redLED, HIGH);
  delay(dit);
  digitalWrite(redLED, LOW);
  delay(dit);

  digitalWrite(redLED, HIGH);
  delay(dit);
  digitalWrite(redLED, LOW);
  delay(dit);

  digitalWrite(greenLED, HIGH);
  delay(dah);
  digitalWrite(greenLED, LOW);
  delay(dah);

  digitalWrite(greenLED, HIGH);
  delay(dah);
  digitalWrite(greenLED, LOW);
  delay(dah);

  digitalWrite(greenLED, HIGH);
  delay(dah);
  digitalWrite(greenLED, LOW);
  delay(dah);


  digitalWrite(blueLED, HIGH);
  delay(dit);
  digitalWrite(blueLED, LOW);
  delay(dit);

  digitalWrite(blueLED, HIGH);
  delay(dit);
  digitalWrite(blueLED, LOW);
  delay(dit);

  digitalWrite(blueLED, HIGH);
  delay(dit);
  digitalWrite(blueLED, LOW);
  delay(dit);

  delay(longDel);
}
