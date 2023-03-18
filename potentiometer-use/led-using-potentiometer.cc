// C++ code
//
int readPin=A2;
int readVal;
float V2;
int shortDelay(100);
int redLedPin=9;

void setup() {
  pinMode(readPin, INPUT);
  pinMode(redLedPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  readVal = analogRead(readPin);
  V2= (5./1023.) * readVal;
  Serial.println(V2);
  if(V2>4.0){
	  digitalWrite(redLedPin, HIGH);
      Serial.println("Led is on");
  }else if(V2<4.0) {
          Serial.println("Led is off");
  	  digitalWrite(redLedPin, LOW);
  }
  delay(shortDelay);
}
