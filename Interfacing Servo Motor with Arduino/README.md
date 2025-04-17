# 🚀 Arduino Servo Motor Control Project

This project demonstrates how to control a **servo motor** using an **Arduino**. Servo motors are great for applications requiring precise angle positioning such as **robotics, automation**, and other **mechanical systems**.

---

## 🛠️ Circuit Setup

### 🔌 Servo Motor Connections
- **VCC** (Power) → Connect to **5V** pin on the Arduino (for low-power servos).
- **GND** (Ground) → Connect to **GND** pin on the Arduino.
- **Signal Pin** → Connect to a **PWM-capable** pin on the Arduino (e.g., **Pin 7**).

### ⚡ Power Considerations
- If you're using a **high-power servo**, the Arduino might not supply enough current.
- In this case, **use an external power supply**.
- Always **connect the ground (GND)** of the external supply to the **Arduino GND** to complete the circuit.

---

## 🧠 Working Method

### 🎛️ Servo Control with PWM
- Servo motors are controlled using **Pulse Width Modulation (PWM)**.
- The `Servo.write(angle)` command moves the servo to a specific angle (from **0° to 180°**).
- PWM pulse width determines the angle:
  - **1 ms** pulse ≈ **0°**
  - **2 ms** pulse ≈ **180°**

### 🔄 Motor Movement
- The servo motor moves **smoothly between angles**.
- A `for` loop can be used to create a **sweeping motion** from 0° to 180° and back.

### ⚠️ Power Supply
- For **low-power servos**, the Arduino's 5V pin can be used directly.
- For **larger servos**, use an **external power supply** to avoid damaging the Arduino.

---

## 📦 Requirements

- Arduino Uno or compatible board
- Servo Motor (SG90 or similar)
- Jumper wires
- (Optional) External power supply for high-power servos

---



## 📚 Applications

- Robot arms
- Pan-and-tilt camera systems
- Automated gates
- Animatronics
- DIY projects

---

