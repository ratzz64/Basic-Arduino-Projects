# 🚶 PIR Motion Sensor with LED Indicator

A simple Arduino-based project that uses a **PIR sensor** to detect motion and trigger an **LED**. This project demonstrates how infrared sensing can be used to create motion-based responses like basic intruder alerts or automation systems.

---

## 🔧 Components Required

- Arduino Uno  
- PIR Sensor (HC-SR501 or similar)  
- LED  
- 220Ω Resistor  
- Breadboard  
- Jumper wires  

---

## 🛠️ Circuit Setup

### 🔹 PIR Sensor Connections
- **VCC** → Connect to **5V** on the Arduino via the breadboard  
- **GND** → Connect to **GND** on the Arduino  
- **Signal** → Connect to **D13** on the Arduino  

### 🔹 LED Connections
- **Anode (long leg)** → Connect to **D12** via a **220Ω resistor**  
- **Cathode (short leg)** → Connect to the **GND rail** on the breadboard (tied to Arduino GND)

### 🔹 Power Supply
- Power the Arduino using a **USB cable** or an **external power source**

---

## ⚙️ How It Works

1. **Detection:**  
   The **PIR sensor** continuously monitors for infrared radiation changes (motion from a person or animal).

2. **Response:**  
   - When motion is detected, the sensor sends a **HIGH** signal to the Arduino.
   - The Arduino then turns **ON** the LED connected to digital pin **D12**.
   - As long as movement is detected, the LED stays lit.

3. **Reset:**  
   - Once motion ceases, the PIR sensor sends a **LOW** signal.
   - The Arduino reads this and turns **OFF** the LED.

---

## 🔍 Applications

- Basic intruder or occupancy detection  
- Smart lighting systems  
- Automation for rooms and halls  
- Entry detection in smart home setups  

