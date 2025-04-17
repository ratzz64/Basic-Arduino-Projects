# 🚦 Traffic Light Simulation Using Arduino and Push Button

This project simulates a simple **traffic light system** using **three LEDs** (red, yellow, green) and a **push button**. The LEDs light up in a traffic signal sequence when the button is pressed, controlled by an Arduino.

---

## 🧰 Components Required

- Arduino Uno  
- Red, Yellow, and Green LEDs  
- 3 × 220Ω Resistors (for LEDs)  
- 1 × 1000Ω Resistor (for push button)  
- Push Button  
- Breadboard  
- Jumper wires  

---

## 🔌 Circuit Connections

### Power and Ground
- The **5V pin** from the Arduino is connected to the **positive rail** on the breadboard.
- The **GND pin** from the Arduino is connected to the **negative rail** on the breadboard.

### LED Setup
- **Red LED**:
  - **Cathode** → 220Ω resistor → Ground rail  
  - **Anode** → **D13** on the Arduino
- **Yellow LED**:
  - **Cathode** → 220Ω resistor → Ground rail  
  - **Anode** → **D12** on the Arduino
- **Green LED**:
  - **Cathode** → 220Ω resistor → Ground rail  
  - **Anode** → **D8** on the Arduino

### Push Button
- **Terminal 1a** → 1000Ω resistor → Ground rail  
- **Terminal 2a** → Positive rail (5V)  
- **Terminal 1b** → **D2** on the Arduino

---

## ⚙️ Working Principle

When the **push button** is pressed:

- The **Arduino** detects the input signal from digital pin D2.
- It triggers a **sequential blinking** of the red, yellow, and green LEDs, mimicking a real-world traffic light cycle.
- The **resistors** are used to protect the LEDs and button by limiting the current passing through them.
- The sequence and timing are controlled in the Arduino code using delay functions.

This project is great for learning about digital input, output control, and simulating real-life systems with microcontrollers.

