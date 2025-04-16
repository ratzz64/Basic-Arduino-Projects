# 🌬️ Breathing LED Effect Using Arduino Uno
This simple project creates a breathing (fade in and out) light effect using Pulse Width Modulation (PWM) on an Arduino Uno. The LED simulates a natural inhale-exhale glow — perfect for ambient lighting or as a visual indicator.

## 🧰 Components Needed
1.Arduino Uno

2.LED (any color)

3.220Ω Resistor

4.Breadboard & Jumper Wires

## 🔌 Circuit Connection
-Connect the anode (longer leg) of the LED to digital pin 9 on the Arduino (a PWM-enabled pin).

-Connect the cathode (shorter leg) of the LED to one end of a 220Ω resistor.

-Connect the other end of the resistor to GND on the Arduino.

## 💡 Working Principle
-The Arduino uses PWM to simulate analog control of voltage on the LED pin.

-The analogWrite() function is used to gradually change the brightness from 0 (off) to 255 (fully on) and back down.

-This smooth change in brightness creates a breathing light effect, similar to an inhale and exhale rhythm.

## 🚀 How to Use
1.Build the circuit as described above.

2.Upload the breathing LED code (provided below or in the repo) to your Arduino.

3.Power the Arduino — the LED will now breathe in and out smoothly.
