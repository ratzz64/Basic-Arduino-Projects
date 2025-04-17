# 🌡️ Arduino + LCD + TMP36 Temperature Display

This project demonstrates how to interface an **LCD display** and **TMP36 analog temperature sensor** with an **Arduino**. It reads ambient temperature and displays the value in **Fahrenheit** on the LCD. Ideal for basic weather stations, DIY thermometers, and sensor simulation in Tinkercad.

---

## 🔌 Circuit Connections

### 1. 📺 LCD Display
- **Pin 1 (GND)** → Connect to **GND** on Arduino  
- **Pin 2 (VCC)** → Connect to **5V** on Arduino  
- **V0 (Contrast Control)** → Connect to the **middle pin** of a potentiometer  
- **Potentiometer Terminals**:  
  - Terminal 1 → Connect to **5V**  
  - Terminal 2 → Connect to **GND**

### 2. 🧠 LCD Control Pins
- **RS** → Connect to **D12** on Arduino  
- **RW** → Connect to **GND**  
- **E** → Connect to **D11** on Arduino  

### 3. 🔢 LCD Data Pins (4-bit mode)
- **DB4** → Connect to **D5**  
- **DB5** → Connect to **D4**  
- **DB6** → Connect to **D3**  
- **DB7** → Connect to **D2**

### 4. 🌡️ TMP36 Temperature Sensor
- **Power** → Connect to **5V**  
- **GND** → Connect to **GND**  
- **Vout** → Connect to **A0**  

### 5. 💡 LCD Backlight (LED)
- **Anode** → Connect to **5V** through a **220Ω resistor**  
- **Cathode** → Connect to **GND**

---

## 🧠 Working

- The **TMP36 sensor** outputs a voltage that changes linearly with temperature.
- The **Arduino reads** this voltage via **A0**, calculates the temperature in **Fahrenheit**, and sends the result to the **LCD display**.
- The **potentiometer** adjusts the **LCD contrast** for better readability.

---

## 🧪 Simulation Notes

- In **Tinkercad**, you can simulate the circuit and **manually adjust** the TMP36 output to test different temperatures.
- The **LCD will update in real-time**, allowing you to visualize how the temperature changes affect the display.

