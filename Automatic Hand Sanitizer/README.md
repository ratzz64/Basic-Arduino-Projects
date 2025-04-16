# 🧴 Automatic Hand Sanitizer Dispenser Using Arduino
This project uses an ultrasonic sensor to detect a hand and automatically triggers a servo motor to dispense sanitizer — a simple, touchless solution for hygiene using Arduino.

## 🚀 Overview
The system detects the presence of a hand within a certain distance using the HC-SR04 ultrasonic sensor. When detection occurs, a servo motor is activated to press a pump or valve, dispensing sanitizer without physical contact.

## 🧰 Components Needed
1.Arduino Uno

2.Ultrasonic Sensor (HC-SR04)

3.Servo Motor (e.g., SG90)

4.Sanitizer Bottle or Container

5.Breadboard

6.Jumper Wires

7.Power Supply (for Arduino)

## 🔌 Circuit Connections
1. Ultrasonic Sensor (HC-SR04)
-Connect VCC of the sensor to the 5V pin on the Arduino.

-Connect GND of the sensor to the GND pin on the Arduino.

-Connect Trig pin of the sensor to digital pin 9 on the Arduino.

-Connect Echo pin of the sensor to digital pin 10 on the Arduino.

2. Servo Motor
-Connect the red wire (VCC) of the servo to the 5V pin on the Arduino.

-Connect the brown or black wire (GND) of the servo to the GND pin on the Arduino.

-Connect the orange or yellow wire (Signal) of the servo to digital pin 6 on the Arduino.

Make sure the servo and ultrasonic sensor share a common ground with the Arduino.
## ⚙️ Working Principle
-The ultrasonic sensor continuously measures the distance in front of it.

-When a hand is detected within a defined range (e.g., < 10 cm), the Arduino sends a signal to the servo.

-The servo motor rotates to press the sanitizer dispenser and then resets to its original position.

## 🛠️ How to Use
1.Connect all components as per the diagram above.

2.Upload the Arduino sketch to your board.

3.Power the Arduino using a USB cable or an external 5V supply.

4.Place your hand near the sensor — sanitizer will be dispensed automatically!
