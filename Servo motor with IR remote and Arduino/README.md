# 🎮 IR Remote Controlled Servo Motor (Arduino Project)

This project allows you to control a **servo motor** using an **IR remote**, powered by an **IR sensor** and **Arduino Uno**. Based on different button inputs, the servo rotates to specific angles and then returns to its original position.

---

## 🧰 Components Required

- Arduino Uno  
- IR Sensor Module  
- Servo Motor (SG90 or similar)  
- IR Remote Control  
- Jumper Wires  
- Breadboard  
- External Power Supply (if needed)

---

## 🔌 Circuit Connections

### 🔹 IR Sensor
- **OUT** → Digital pin **5** on the Arduino  
- **VCC** → **5V** on the Arduino  
- **GND** → **GND**

### 🔹 Servo Motor
- **Signal/Control wire** → Digital pin **3** on the Arduino  
- **VCC (Power)** → **5V** on Arduino  
- **GND** → **GND rail** on the breadboard

---

## ⚙️ How It Works

The system detects signals from an **IR remote** and translates each signal into a command for the servo motor:

- **Button 1**: Rotate to **45°**, then return to 0° after 1 second  
- **Button 2**: Rotate to **90°**, then return to 0° after 1 second  
- **Button 3**: Rotate to **135°**, then return to 0° after 1 second  
- **Button 4**: Rotate to **180°**, then return to 0° after 1 second  

The servo resets to its starting position after each action.

---



## 📌 Applications

- DIY robotic arm or turret control  
- Smart home automation  
- RC servo-based control systems  
- Educational demonstrations

