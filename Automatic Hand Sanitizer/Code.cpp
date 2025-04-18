#include <Servo.h>

Servo myservo;  // Corrected from "myservd" to "myservo"
#define trigPin 2
#define echoPin 3

float duration, distance;

void setup() {
    myservo.attach(9); // Attaches the servo on pin 9
    Serial.begin(9600);
    pinMode(trigPin, OUTPUT);  // Corrected from "pinhode" to "pinMode"
    pinMode(echoPin, INPUT);   // Corrected from "pinhode" to "pinMode"
}

void loop() {
    // Write a pulse to the HC-SR04 Trigger Pin
    digitalWrite(trigPin, LOW);
    delayMicroseconds(2);
    digitalWrite(trigPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin, LOW);

    // Measure the response from the HC-SR04 Echo Pin
    duration = pulseIn(echoPin, HIGH);

    // Determine distance from duration
    // Use 343 metres per second as speed of sound
    distance = (duration / 2) * 0.0343;

    // Send results to Serial Monitor
    Serial.print("Distance = ");
    
    if (distance >= 4 || distance <= 2) {
        Serial.println("Out of range");
        myservo.detach();
    }
    else {
        myservo.attach(9);
        myservo.write(0);
        delay(1000);
        myservo.write(90);
        Serial.print(distance);
        Serial.println(" cm");
        delay(500);
    }
    
    delay(500);
    myservo.detach();
}