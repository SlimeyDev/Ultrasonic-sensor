const int trigPin = 6;
const int echoPin = 5;
const int led = 12;
long duration;
int distance;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}
void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = duration/58.2;
  if (distance<=30){
    digitalWrite(led, HIGH);
  }
  else{
    digitalWrite(led, LOW);

  }
}
