# 🧠 ATtiny85 Voltage Display with 7-Segment via 74HC595
This project demonstrates a simple voltage measurement system using the ATtiny85 microcontroller. It reads analog voltage input and displays the result on a 4-digit 7-segment display using a 74HC595 shift register for efficient control.

## 🔌 Connections
### 1. Power Supply
-Powered via USB (regulated 5V).

-GND is common across all components.

### 2. ATtiny85 Microcontroller
-Reads analog voltage using its ADC (Analog-to-Digital Converter).

-Controls the 74HC595 shift register to drive the 7-segment display.

### 3. 74HC595 Shift Register
-Converts serial data from the ATtiny85 into parallel output.

-Output lines are connected to the 7-segment display’s segment pins.

### 4. 7-Segment Display (4-Digit, Multiplexed)
-Segment pins are connected to the shift register.

-Common cathodes are switched by ATtiny85 for digit multiplexing.

### 5. Voltage Measurement Circuit
-A potentiometer is used to vary the input voltage.

-This voltage is fed into the ATtiny85’s ADC input pin.

## ⚙️ Working Principle
### 1. Voltage Sensing
-The ATtiny85 reads the analog voltage and calculates the actual voltage using:


V = (ADC_Value / 1023) × 5V

### 2. Data Processing
-The voltage is scaled and split into individual digits.

-Digits are prepared for display via serial communication with the shift register.

### 3. Displaying on 7-Segment
-ATtiny85 sends data to 74HC595 via serial.

-The shift register outputs the digit patterns in parallel.

-Multiplexing is used to rapidly switch between digits, giving the illusion of a continuous display.

### 4. Refreshing the Display
-Display updates every 4 milliseconds.

-The millis() function is used to handle non-blocking updates, allowing other tasks to run smoothly.

## 🧪 Testing
-Rotate the potentiometer to simulate varying voltage.

-The corresponding voltage value will be displayed in real-time on the 7-segment display.

## 📦 Components Used
1.ATtiny85 Microcontroller

2.74HC595 Shift Register

3.4-Digit 7-Segment Display (Common Cathode)

4.Potentiometer

5.USB Power Supply

6.Connecting Wires, Breadboard

## 🛠️ Future Improvements
-Add decimal point handling for more precise voltage display.

-Implement calibration for more accurate readings.

-Optimize refresh rate based on power consumption.

