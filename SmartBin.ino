#include <Servo.h>

// Pin Definitions
const int trigPin = 2;  
const int echoPin = 3;  
const int servoPin = 9;

Servo myServo;

void setup() {
  myServo.attach(servoPin);
  myServo.write(0); // Ensure lid is closed at start
  
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  
  Serial.begin(9600); // For debugging
}

void loop() {
  long duration, distance;

  // Trigger the ultrasonic sensor
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Calculate distance
  duration = pulseIn(echoPin, HIGH);
  distance = (duration * 0.034) / 2;

  // Logic: If hand is closer than 20cm, open lid
  if (distance < 20 && distance > 0) {
    myServo.write(90); // Open position
    delay(3000);       // Wait 3 seconds
    myServo.write(0);  // Close position
  }
  
  delay(100); 
}