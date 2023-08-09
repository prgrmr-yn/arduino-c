int redPin = 13;
int bluePin = 12;
int orangePin = 11;

String reply;
String msg = "What light you want me to turn on? ";


void setup(){
  Serial.begin(9600);
  pinMode(redPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  pinMode(orangePin, OUTPUT);
}

void loop(){
	Serial.println(msg);
    while (Serial.available() == 0){};
  	reply = Serial.readString();
	Serial.print("Your Answer:");
  	Serial.print(reply);
  	Serial.println("");
  if (reply == "red"){
	digitalWrite(redPin, HIGH);
  } if (reply == "blue"){
    digitalWrite(bluePin, HIGH);
  } if (reply == "orange"){
    digitalWrite(orangePin, HIGH);
  }if (reply == "turn all off"){
	digitalWrite(bluePin, LOW);
    digitalWrite(redPin, LOW);
    digitalWrite(orangePin, LOW);
  }
}
