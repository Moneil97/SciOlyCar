// defines pins numbers
const int stepPin = 3; 
const int dirPin = 4; 
const int buttonPin = 5;
const int ledPin = 13;

const int distance = 5 * 100; //Distance in Centimeters (m * 100 = cm)
const int wheelCircumfrence = 30; //Wheel Circumfrence in Centimeters
const int revs = distance / wheelCircumfrence;
const int stepsPerRev = 200;

void setup() {
  pinMode(stepPin,OUTPUT); 
  pinMode(dirPin,OUTPUT);
  pinMode(buttonPin,INPUT);
  //pinMode(ledPin, OUTPUT);
  forward();
}
void loop() {
  if (digitalRead(buttonPin) == HIGH){
    for(int x = 0; x < stepsPerRev * revs; x++) {
      digitalWrite(stepPin,HIGH); 
      delayMicroseconds(500); 
      digitalWrite(stepPin,LOW); 
      delayMicroseconds(500); 
    }
  }
}

void forward(){
  digitalWrite(dirPin,HIGH);
}

void reverse(){
  digitalWrite(dirPin,LOW);
}
