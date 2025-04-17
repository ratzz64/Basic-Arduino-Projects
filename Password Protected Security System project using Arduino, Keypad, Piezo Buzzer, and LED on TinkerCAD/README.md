# 🔢 4×4 Keypad Controlled Arduino System

This Arduino-based project uses a **4×4 keypad** as an input device to trigger responses via **LED indicators** and a **Piezo buzzer**. It’s ideal for simple password entry systems, menu navigation interfaces, or interactive input-based feedback systems.

---

## 🧰 Components Required

- Arduino Uno  
- 4×4 Matrix Keypad  
- Breadboard  
- Jumper wires  
- 2 LEDs (Red and Green)  
- 2 Resistors (for LEDs)  
- Piezo Buzzer  

---

## 🔌 Circuit Connections

### 🔹 Keypad
- The **4×4 keypad** has **8 terminals** (4 rows + 4 columns).
- Each terminal is connected to **8 digital I/O pins** on the Arduino.
- This allows the Arduino to detect and identify key presses.

### 🔹 Power Distribution
- **5V** and **GND** from the Arduino are connected to the **breadboard’s power and ground rails**.

### 🔹 LED Indicators
- **Green LED Anode** → **D11**, Cathode → GND via resistor  
- **Red LED Anode** → **D10**, Cathode → GND via resistor

### 🔹 Piezo Buzzer
- **Positive terminal** → **D12**  
- **Negative terminal** → Ground rail on the breadboard  

---

## ⚙️ How It Works

- The **Arduino reads inputs** from the keypad.
- Based on the pressed key, specific functions are triggered:
  - **Turn on LEDs**
  - **Activate the buzzer**
  - **Control sequences or custom responses**
- The system offers a tactile and visual/audible interface for interaction.

