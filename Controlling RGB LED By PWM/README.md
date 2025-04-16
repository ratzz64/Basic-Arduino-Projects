# RGB LED Color Mixing with Arduino UNO
This project demonstrates how to use Pulse Width Modulation (PWM) on an Arduino UNO to control the brightness of an RGB LED and create a wide variety of colors. By adjusting the intensity of the red, green, and blue components, you can produce any color by mixing these three primary lights.

## 🧰 Components Required
1.Arduino UNO

2.RGB LED (Common Anode or Common Cathode)

3.(3 × 220)Ω Resistors

Breadboard and Jumper Wires

## 🔌 Circuit Setup
### 1. RGB LED Connections
Depending on the type of RGB LED you have:

-For Common Anode RGB LED:
Connect the anode (common pin) to 5V on the Arduino.

-Connect the red, green, and blue cathode pins to PWM-capable pins on the Arduino, such as pin 9, pin 10, and pin 11.

-For Common Cathode RGB LED:
Connect the cathode (common pin) to GND on the Arduino.

-Connect the red, green, and blue anode pins to PWM-capable pins like pin 9, pin 10, and pin 11.

### 2. Resistors
Place a 220Ω resistor in series with each RGB pin (Red, Green, Blue) to limit the current and protect the LED.

### 3. Power Supply
The Arduino powers the RGB LED through the 5V pin, and all components must share a common ground (GND).

## 💡 Working Method
### 1. PWM Signal
The Arduino uses PWM signals through the analogWrite() function to simulate different brightness levels for each color. For example:

analogWrite(redPin, 255) sets the red component to full brightness.

analogWrite(redPin, 0) turns the red component off.

### 2. Color Creation
Adjusting the intensity of the red, green, and blue components allows you to mix them into countless color variations. For instance:

Red at 255, Green at 128, and Blue at 64 creates a unique purple shade.

### 3. Cycling Through Colors
In the loop() function of your Arduino sketch, you can vary the RGB values over time to cycle through a rainbow of color combinations — creating a smooth, animated color-changing effect.

