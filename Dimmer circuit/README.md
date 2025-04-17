# 🧠 Dimmer Circuit
This project demonstrates how to use a potentiometer to control the brightness of an LED using an Arduino Uno. By rotating the potentiometer, you vary the input voltage, which is read through an analog pin and translated into a PWM signal to adjust the LED's brightness accordingly.

## 🧰 Components Used
1.1 × Arduino Uno R3

2.1 × Breadboard

3.1 × Potentiometer (10kΩ recommended)

4.1 × LED

5.1 × 220Ω Resistor (for LED protection)

6.Jumper wires

7.USB cable for programming and power

##  ⚙️Circuit Diagram Overview
### The potentiometer is connected with:

-One outer pin to 5V

-One outer pin to GND

-Middle pin (wiper) to Analog pin A0

### The LED is connected:

-Positive leg (anode) to digital pin 9 through a 220Ω resistor

-Negative leg (cathode) to GND

The potentiometer acts as an analog input device, sending voltage levels between 0 and 5V to pin A0. These values (0–1023) are mapped to a PWM value (0–255) to control the brightness of the LED.
## 🛠️How to Use
-Connect all components as per the circuit layout.

-Upload the code to the Arduino using the Arduino IDE.

-Open the Serial Monitor to view real-time PWM values.

-Turn the potentiometer knob to see the LED brightness change.

## 📦Applications
-Basic understanding of analog inputs and PWM

-LED dimming controls

-User-input based control systems
