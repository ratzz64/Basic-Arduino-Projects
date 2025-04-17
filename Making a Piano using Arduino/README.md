## 🔊 Piano Using Arduino and Buzzer

This project allows you to play different tones using a buzzer and multiple pushbuttons connected to an Arduino. Each button is assigned a specific frequency, and pressing a button triggers the buzzer to play the corresponding tone.

## 🔌 Circuit Connection

### 1. Powering the Breadboard  
The breadboard is powered through the Arduino's 5V and GND pins.

### 2. Buzzer Connection  
- Connect the **positive terminal** of the buzzer to **digital pin 13** on the Arduino.  
- Connect the **negative terminal** of the buzzer to **GND** on the breadboard.

### 3. Pushbutton Connections  
- Connect **8 pushbuttons** to digital pins **2 through 9** on the Arduino.  
- Each pushbutton has a **pull-up resistor** connected (internal or external).  
- The opposite terminal of each button is connected to **GND** to complete the circuit when pressed.

## ⚙️ How It Works

- Once the Arduino is powered and the code is uploaded, the setup becomes interactive.  
- Pressing any of the 8 pushbuttons will cause the buzzer to play a tone.  
- Each button is mapped to a unique frequency, allowing you to play different notes.  
- You can customize the sound by editing the tone frequencies in the Arduino code.

