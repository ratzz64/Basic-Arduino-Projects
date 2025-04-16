# 🔋 Digital Voltmeter Using Arduino
This project demonstrates how to build a simple digital voltmeter using an Arduino Uno and a 16x2 LCD display with an I2C interface. It measures analog input voltage via a voltage divider and displays the result in real time on the LCD.

## 🧰 Components Required
1.Arduino Uno

2.16x2 LCD display (with I2C module)

3.Two resistors for voltage divider

4.Breadboard and jumper wires

5.Power supply (USB or external 5V)

## 🔌 Circuit Connections
### 1.LCD Display (I2C Connection):
-Connect the LCD's VCC to Arduino 5V, GND to GND, SDA to A4, and SCL to A5.

### 2.Voltage Measurement (Voltage Divider):
-Connect the voltage source to the top of R1. The junction of R1 and R2 connects to analog pin A0.

-The bottom of R2 connects to GND. The voltage at this junction is safely scaled down for the Arduino.

### 3.Power Supply:
-Power the Arduino via USB or a 5V regulated supply. An external 9V battery can also be used through the Vin pin.

## ⚙️ How It Works
1.The Arduino reads the analog voltage at A0 and converts the reading to voltage using a scaling formula. This scaled voltage is then adjusted using the voltage divider ratio to estimate the actual input voltage.

2.The calculated voltage is displayed on the 16x2 LCD using the I2C interface and updates in real time, allowing live monitoring of input voltage.

## 📌 Notes
-Make sure the voltage at analog pin A0 does not exceed 5V.

-Use precise resistor values for accurate measurement.

-To measure higher voltages, increase the R1 value and update the formula in code to match the new voltage divider ratio.
