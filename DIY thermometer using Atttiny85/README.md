# 🌡️ ATtiny85 Thermometer
This project demonstrates how to use an ATtiny85 microcontroller and a TMP36 temperature sensor to control an LED's blinking pattern based on temperature thresholds.

## 🔌 Circuit Connections
● ATtiny85
Vcc (Power): Connect to battery's positive terminal

GND: Connect to battery's negative terminal

● TMP36 Temperature Sensor
Vcc: Connect to battery's positive terminal

GND: Connect to battery's negative terminal

Vout: Connect to PB2 of ATtiny85 (Analog Input)

● LED with Resistor
Anode (longer leg): Connect to PB0 of ATtiny85 (Digital Output)

Cathode (shorter leg): Connect to one end of a resistor

Other end of resistor: Connect to ATtiny85 GND

## ⚙️ Working Principle
### 1.Temperature Sensing

-The TMP36 outputs an analog voltage proportional to the ambient temperature.

-This voltage is read by the ATtiny85 via its ADC (on pin PB2).

### 2.Data Processing

-The microcontroller converts the voltage to temperature using the TMP36's conversion formula:

-Temp (°C) = (Vout in mV - 500) / 10

The code includes predefined thresholds to determine temperature ranges.

### 3.LED Blinking Control

The LED on PB0 blinks with different patterns based on the measured temperature.

-Slow blink for lower temperatures

-Faster blink for higher temperatures

## 🧪 Testing
-Apply power using a 3V coin cell or 2x AA batteries.

-Change the surrounding temperature (e.g., by touching the TMP36) and observe the LED blinking faster or slower.

## 📦 Components Used
1.ATtiny85 Microcontroller

2.TMP36 Temperature Sensor

3.LED

4.Resistor (220Ω to 1kΩ)

5.Coin Cell / Battery Pack (3V)

6.Breadboard & Jumper Wires

## 🛠️ Future Improvements
-Add a second LED for dual-range indication.

-Use a buzzer for high-temperature alerts.

-Display temperature on an OLED screen or via serial if debugging.
