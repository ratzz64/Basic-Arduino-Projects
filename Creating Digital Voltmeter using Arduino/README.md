# 🔌 Digital Voltmeter Using Arduino and I2C LCD
This project demonstrates how to build a digital voltmeter using an Arduino UNO and a 16x2 LCD (I2C interface). The system reads voltage from an analog input and displays the real-time voltage reading on the LCD screen. It also outputs the value via the Serial Monitor for debugging or logging.

## 🧰 Components Required
1.Arduino UNO

2.16x2 LCD with I2C module

3.Resistors (e.g., 2 × 10kΩ for voltage divider)

4.Jumper wires

5.Breadboard

6.Voltage source (≤12V if using a divider)

## 🔌 Circuit Setup
### 1. LCD (I2C Interface) Connections
-Connect the VCC of the LCD to 5V on the Arduino.

-Connect the GND of the LCD to GND on the Arduino.

-Connect the SDA pin of the LCD to A4 on the Arduino UNO.

-Connect the SCL pin of the LCD to A5 on the Arduino UNO.

### 2. Voltage Measurement Input
-Connect the voltage to be measured to the A0 analog pin on the Arduino.

-If you're measuring voltages above 5V, use a voltage divider to scale it down safely.

#### Voltage Divider Example (for >5V Inputs)
-Connect a 10kΩ resistor between the voltage source and A0.

-Connect another 10kΩ resistor between A0 and GND.

-This scales the input by half, allowing you to measure up to 10V safely.

## ⚙️ Working Principle
### 1. Analog-to-Digital Conversion
The Arduino UNO uses a 10-bit ADC to read voltages from 0 to 5V. This produces values from 0 to 1023, which are then converted to actual voltage levels.

### 2. Voltage Calculation
The formula used in the code is:

voltage = (analogRead(A0) * 5.0) / 1023;

If a voltage divider is used, multiply the result accordingly (e.g., ×2 for a 1:1 divider).

### 3. Real-Time Display on LCD
The measured voltage is continuously displayed on the 16x2 LCD using the I2C interface.

### 4. Serial Monitor Output
The Arduino also sends the measured voltage to the Serial Monitor for live debugging or data logging.
