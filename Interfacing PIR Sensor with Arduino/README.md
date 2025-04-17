# 🚶 PIR Motion Detection with Arduino

In this project, we interface a **PIR (Passive Infrared) Sensor** with an **Arduino** to detect motion. The PIR sensor detects infrared radiation emitted by human bodies and outputs a digital signal when motion is detected.

This project can be used in:
- Home security systems  
- Automatic lighting control  
- Motion-based automation and alerts

---

## 🔌 Circuit Setup

### 1. PIR Sensor Connections

- **VCC** → Connect to **5V** on the Arduino  
- **GND** → Connect to **GND** on the Arduino  
- **OUT (Signal Pin)** → Connect to **Digital Pin 2** on the Arduino

### 2. LED Connections

- **Anode (positive)** → Connect to **Digital Pin 13** on the Arduino through a **220Ω resistor**  
- **Cathode (negative)** → Connect to **GND**

### 3. Power Supply

- Arduino can be powered via **USB** or an **external power source** (e.g., **9V battery**)

---

## ⚙️ Working Principle

### 1. PIR Sensor Functionality

- The **PIR sensor** detects motion by measuring changes in infrared (IR) radiation.  
- When a human body moves within the sensor’s range, the IR radiation pattern changes.  
- The sensor then outputs a **HIGH signal** to the Arduino.  
- If no motion is detected, the sensor outputs **LOW**.  

> The sensor usually includes two small dials to adjust:  
> - **Sensitivity** (range of detection)  
> - **Time Delay** (how long the output stays HIGH)

### 2. Arduino Logic

- The Arduino **monitors the PIR sensor’s output**.  
- When the output is **HIGH**, the Arduino turns **on the LED**.  
- When the output is **LOW**, the LED is **turned off**.

---

## 🔧 Components Required

- Arduino Uno (or compatible board)  
- PIR motion sensor  
- LED  
- 220Ω resistor  
- Jumper wires  
- Breadboard  
- USB cable or 9V battery for power

---

## ✅ Features

- Simple and reliable motion detection  
- Visual feedback with onboard or external LED  
- Can be extended for alarms, lights, or notifications

