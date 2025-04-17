# Capacitance Meter Using Arduino

A simple Capacitance Meter built with Arduino that measures the value of a capacitor in farads. This project uses the charging time of a capacitor through a known resistor to calculate its capacitance.

## 🧰 Components Used

- Arduino Uno  
- LCD Display (16x2, I2C)  
- Capacitor (to be measured)  
- Resistor (typically 1kΩ)  
- Pushbutton (optional, for triggering measurement)  
- Breadboard and jumper wires  

## 🔌 Circuit Overview

- The capacitor and resistor are connected in series between a digital pin (e.g., D2) and ground.
- Another digital pin (e.g., D3) is used to monitor the voltage level and determine the charging time using `pulseIn()`.
- The LCD (via I2C using SDA and SCL) displays the calculated capacitance.

## 🧠 How It Works

1. The capacitor is charged through a known resistor.
2. The Arduino measures the time it takes for the capacitor to charge to a certain threshold.
3. Using the formula:

   ```
   C = t / R
   ```

   where:
   - `C` is the capacitance in farads  
   - `t` is the measured charging time  
   - `R` is the resistance in ohms  

4. The result is displayed on the LCD screen in farads.

## 🛠️ Getting Started on Tinkercad

1. Create a new circuit project.
2. Add and wire up the Arduino, resistor, capacitor, LCD display, and optional button.
3. Upload the Arduino code to calculate and display the capacitance.
4. Run the simulation to test the circuit.

