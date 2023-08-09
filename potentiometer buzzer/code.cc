int myNum;
int buzzPin = 8;
int potPin = A2;
int pause = 500;
int potVal;

void setup(){
  Serial.begin(9600);
  pinMode(buzzPin, OUTPUT);
  pinMode(potPin, INPUT);
}

void loop(){

  potVal = analogRead(potPin);
  Serial.println(potVal);
  if ( potVal > 1000){
    digitalWrite(buzzPin, HIGH);
    delay(pause);
    digitalWrite(buzzPin, LOW);
    delay(pause);
  }
}
