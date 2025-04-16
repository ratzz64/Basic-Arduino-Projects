# 💡 LED Brightness Control Using ATTiny85 and Potentiometer
This project demonstrates how to control the brightness of an LED using an ATTiny85 microcontroller and a potentiometer. The potentiometer provides analog input, which the ATTiny85 reads to generate a corresponding PWM signal to dim or brighten the LED.

## 🧰 Components Required
1.ATTiny85 microcontroller

2.LED (any color)

3.220Ω Resistor

4.Potentiometer (10kΩ recommended)

5.Breadboard

6.Jumper Wires

7.USBasp or Arduino (for programming ATTiny85)

8.External 5V Power Supply (optional)

## 🔌 Circuit Setup
### 1. ATTiny85 Connections
-Connect the VCC pin of the ATTiny85 to the 5V rail on the breadboard.

-Connect the GND pin of the ATTiny85 to the GND rail on the breadboard.

### 2. LED Connections
-Connect the anode (long leg) of the LED to Pin 0 (PB0) of the ATTiny85 through a 220Ω resistor.

-Connect the cathode (short leg) of the LED to the GND rail.

### 3. Potentiometer Connections
-Connect one side pin of the potentiometer to 5V.

-Connect the other side pin to GND.

-Connect the wiper (middle pin) of the potentiometer to Pin 2 (PB3) of the ATTiny85. This acts as the analog input.

## ⚙️ Programming the ATTiny85
1.Use a USBasp programmer or an Arduino configured as ISP to upload the sketch to the ATTiny85.

2.Connect the MOSI, MISO, SCK, and RESET pins from the programmer to the corresponding pins on the ATTiny85.

3.Make sure the ATTiny85 is properly powered during programming — either from the programmer or an external 5V supply.

4.In the Arduino IDE, choose the correct board (ATTiny85), clock, and programmer settings, then upload the code.

## 🔋 Power Supply
-The ATTiny85 can be powered either:

-Through the USBasp or Arduino ISP (if supported), or

-From an external regulated 5V supply connected to the breadboard.

## 🧠 How It Works
1.The potentiometer provides a variable analog voltage depending on its position.

2.The ATTiny85 reads this voltage from PB3 (Pin 2) using analogRead().

3.It then maps this value to a PWM range (0–255) and writes it to PB0 (Pin 0) using analogWrite().

4.The LED brightness changes smoothly as the potentiometer is turned.
