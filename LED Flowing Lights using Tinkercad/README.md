# 💡 Flowing LED Light Effect using Arduino 

This project simulates a **flowing LED light effect**, where multiple LEDs light up in sequence to create an animated pattern. It’s perfect for beginners learning about **digital output**, **timing**, and **visual effects** using an **Arduino Uno**.

---

## 🧰 Components Used

- Arduino Uno (virtual in Tinkercad)  
- Breadboard  
- Multiple LEDs  
- 220Ω resistors (one per LED)  
- Jumper wires  

---

## 🔧 Circuit Setup

### 1. Arduino Uno
- Acts as the controller to manage LED sequence timing.

### 2. LED Configuration
- Place LEDs in a row on the breadboard.
- Each **anode (longer leg)** is connected to a **digital output pin** on the Arduino.
- Each **cathode (shorter leg)** is connected to **GND** through a **220Ω resistor**.

### 3. Power
- Arduino can be powered via **USB** or an **external power supply**.

---

## 🔄 Working Principle

- The Arduino runs a loop where each LED turns **on** briefly and then **off**, moving to the next LED in the sequence.
- This creates a **"flowing" or "chasing" light effect** across the row of LEDs.
- The flow can go in a single direction (e.g., left to right) or **alternate back and forth** for more dynamic animations.
- In **Tinkercad**, the simulation allows you to see the LED movement without needing real hardware.

---

## 💡 Applications & Variations

- Holiday light displays  
- Light chasers for toys or models  
- Indicators for progress or loading animations  
- Expandable to RGB LEDs or multiple sequences

