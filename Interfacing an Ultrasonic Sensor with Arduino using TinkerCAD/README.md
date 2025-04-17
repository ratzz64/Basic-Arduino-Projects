# 📏 Distance Measurement with Arduino & HC-SR04 

This project demonstrates how to **simulate an HC-SR04 ultrasonic distance sensor** using **Tinkercad** and an **Arduino Uno**. The sensor calculates the distance to an object by measuring the time it takes for ultrasonic pulses to reflect back from the surface.

---

## 🧰 What You Need

- Arduino Uno (Tinkercad virtual component)  
- HC-SR04 Ultrasonic Sensor  
- Jumper wires (virtual)

---

## 🔧 Circuit Setup

### 1. Add Components in Tinkercad
- Open Tinkercad and create a new **Circuit**.
- Drag and drop:
  - **Arduino Uno**
  - **HC-SR04 ultrasonic sensor**

### 2. Make the Following Connections
- **VCC (sensor)** → Connect to **5V** on Arduino  
- **GND (sensor)** → Connect to **GND** on Arduino  
- **TRIG** → Connect to **Pin 10** on Arduino  
- **ECHO** → Connect to **Pin 9** on Arduino

---

## ⚙️ Project Workflow

1. **Write and Upload Code**  
   The Arduino code sends a short pulse via the **TRIG** pin, listens for the echo via the **ECHO** pin, calculates the time it takes for the sound to return, and converts that time into a **distance value**.

2. **Start the Simulation**  
   - In Tinkercad, click **"Start Simulation"**.
   - The **Serial Monitor** will display the **distance to the nearest object** in real time.

---

## 💡 How It Works

- The HC-SR04 sensor emits an ultrasonic wave.
- When the wave hits an object and reflects back, the sensor detects the returning echo.
- The Arduino uses the time delay between transmission and reception to calculate distance using the **speed of sound**.
- Tinkercad simulates this behavior and allows you to **move the virtual object** to test how the readings change.

