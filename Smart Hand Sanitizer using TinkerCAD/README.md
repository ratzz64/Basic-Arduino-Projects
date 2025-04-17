# ✋ Automatic Hand Sanitizer Dispenser Using Arduino

This project demonstrates a touchless hand sanitizer dispenser using an **ultrasonic sensor** to detect hand proximity and a **servo motor** to dispense sanitizer automatically. Built on an Arduino platform, this system promotes hygiene by reducing physical contact.

---

## 🧰 Components Required

- Arduino Uno  
- Ultrasonic Sensor (HC-SR04)  
- Servo Motor (SG90 or similar)  
- Breadboard  
- Jumper wires  
- Power supply or USB cable  

---

## 🔌 Circuit Connections

### Ultrasonic Sensor
- The **VCC** pin of the ultrasonic sensor is connected to the **5V** pin on the Arduino via the breadboard.
- The **GND** pin is connected to the **GND** of the Arduino.
- The **Trigger** pin is wired to **digital pin D7** on the Arduino.
- The **Echo** pin is connected to **digital pin D6**.

### Servo Motor
- The **signal pin** of the servo motor is connected to **digital pin D5**.
- The **ground pin** is connected to the **GND rail** on the breadboard.
- The **power pin** is powered from the **5V rail** of the breadboard, which is linked to the Arduino's 5V.

---

## ⚙️ How It Works

- When the system is powered, the ultrasonic sensor continuously measures the distance from any object placed in front of it.
- If a hand or object is detected within a certain threshold (e.g., less than 10 cm), the Arduino interprets this as a request for sanitizer.
- The **servo motor** then rotates to activate a pump mechanism or press a dispenser, releasing a controlled amount of sanitizer.
- After dispensing, the servo returns to its initial position, ready for the next use.

---

## 💡 Use Cases

- Touch-free sanitizing stations in offices, schools, and public places  
- Hygiene-focused DIY automation projects  
- Arduino-based automation learning exercises  

