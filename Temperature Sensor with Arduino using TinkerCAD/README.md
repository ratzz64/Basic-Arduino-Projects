# 🌡️ Arduino + LM35 Temperature Sensor Project

This project demonstrates how to connect and read temperature data from an **LM35 analog temperature sensor** using an **Arduino**. The LM35 provides a simple way to measure temperature with a linear voltage output that corresponds to Celsius.

---

## 🔌 Circuit Connections

Connecting the **LM35** to an **Arduino** is simple and only requires three jumper wires:

### 1. 🔋 Power Supply
- **LM35 VCC** → Connect to **5V** on the Arduino

### 2. 📤 Output Signal
- **LM35 OUT** → Connect to **A0** analog pin on the Arduino

### 3. 🧲 Ground
- **LM35 GND** → Connect to **GND** on the Arduino

---

## 🧠 Working Principle

- The **LM35** outputs a voltage linearly proportional to temperature:  
  - **10 mV per °C** (e.g., 250 mV = 25°C)
- The Arduino reads this **analog voltage** via the **A0 pin** and converts it into a temperature value using simple math.

---


## 📦 Components Required

- Arduino Uno (or compatible)
- LM35 Temperature Sensor
- Breadboard & Jumper Wires
- USB Cable (for programming and serial monitoring)

---

## 📚 Applications

- Room temperature monitoring  
- Greenhouse or lab environmental control  
- Basic weather stations  
- DIY smart home temperature sensing

---

