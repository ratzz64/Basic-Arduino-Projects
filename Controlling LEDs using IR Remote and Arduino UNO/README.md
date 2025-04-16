# 🔦 Controlling LEDs with an IR Sensor Using Arduino UNO
This project demonstrates how to control multiple LEDs using an IR sensor and a remote with an Arduino UNO. The infrared signals from the remote are received and decoded by the IR sensor, allowing the user to toggle different LEDs with specific buttons.

## 🧰 Components Required
1.Arduino UNO

2.IR Sensor Module

3.IR Remote

4.3 LEDs (Blue, Orange, Green)

5.(3 × 220)Ω Resistors

6.Breadboard and Jumper Wires

## 🔌 Circuit Connections
### LED Setup

-Connect the anode (longer leg) of the blue LED to digital pin 2 on the Arduino.

-Connect the anode of the orange LED to digital pin 3.

-Connect the anode of the green LED to digital pin 4.

-Connect the cathode (shorter leg) of each LED to one end of a 220Ω resistor.

-Connect the other ends of all resistors to the GND rail on the breadboard.

### IR Sensor Setup
-Connect the GND pin (usually the middle pin) of the IR sensor to GND on the Arduino.

-Connect the VCC pin (usually the rightmost pin) of the sensor to 5V on the Arduino to supply power.

-Connect the output pin (usually the leftmost pin) of the IR sensor to digital pin 12 on the Arduino.

### Common Ground
-Ensure that the GND pin of the Arduino is connected to the GND rail on the breadboard to establish a common ground for all components.

## ⚙️ Functionality and Simulation
After building the circuit:

1.Write the appropriate Arduino code to decode the IR signals from the remote.

2.Upload the code to the Arduino using the Arduino IDE or simulate the setup using TinkerCAD Circuits.

3.Point the IR remote at the sensor and press buttons to control the LEDs.

### Button Actions:
-Press Button 1 to turn ON the blue LED.

-Press Button 2 to turn OFF the blue LED.

-Press Button 3 to turn ON the orange LED.

-Press Button 4 to turn OFF the orange LED.

-Press Button 5 to turn ON the green LED.

-Press Button 6 to turn OFF the green LED.

