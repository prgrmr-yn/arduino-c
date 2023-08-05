int numBlinks;
String msg= "How many Blinks do you want"  ;
int j;
int bt=500;
int redPin = 12;

void setup() {
  Serial.begin(9600);
  pinMode(redPin,OUTPUT);
}

void loop() {
  Serial.println(msg);
  while (Serial.available() <= 1){}
  numBlinks = Serial.parseInt();

  for (j=1; j<=numBlinks; j++){
    digitalWrite(redPin, HIGH);
    delay(bt);
    digitalWrite(redPin, LOW);
    delay(bt);
  }
}
