const int stepPin = 3; 
const int dirPin = 4; 
const int buttonPin = 5;
 
void setup() {
  pinMode(stepPin,OUTPUT); 
  pinMode(dirPin,OUTPUT);
  pinMode(buttonPin,INPUT);
  forward();
}
void loop() {
  if (digitalRead(buttonPin) == HIGH){
    digitalWrite(stepPin,HIGH); 
    delayMicroseconds(500); 
    digitalWrite(stepPin,LOW); 
    delayMicroseconds(500); 
  }
}

void forward(){
  digitalWrite(dirPin,HIGH);
}

void reverse(){
  digitalWrite(dirPin,LOW);
}
