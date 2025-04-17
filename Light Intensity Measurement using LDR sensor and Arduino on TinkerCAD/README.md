# 🔦 Light Detection with Arduino & LDR (Tinkercad Simulation)

This project demonstrates how to detect light levels using an **LDR (Light Dependent Resistor)** and an **Arduino**, with visual feedback via an **LED** and a **multimeter**. The simulation is designed to be run in **Tinkercad**.

---

## 🧰 Components Required

- Arduino Uno  
- Breadboard  
- LDR (Photoresistor)  
- LED  
- 220Ω resistor (for the LED)  
- 10kΩ resistor (for the LDR voltage divider)  
- Jumper wires  
- Multimeter (virtual, in Tinkercad)

---

## 🔌 Circuit Connections

### 🔋 Power Setup
- Connect the **5V pin** of the Arduino to the **power rail** on the breadboard.
- Connect the **GND pin** of the Arduino to the **ground rail** on the breadboard.
- Use **red wires** for power and **green wires** for ground to match the visual convention.

---

### 📷 LDR Connections
- One terminal of the **LDR** goes to **Analog Pin A0** on the Arduino.
- The same terminal is connected to **GND** via a **resistor** (typically 10kΩ).
- The second terminal of the LDR connects to the **5V rail**.

This forms a voltage divider where the voltage across the resistor varies with light intensity.

---

### 💡 LED Connections
- **Anode (long leg)** of the LED connects to **Digital Pin 9** on the Arduino.
- **Cathode (short leg)** connects to **GND** through a **220Ω resistor** to limit current.

---

### 📟 Multimeter Connections (for Output Monitoring)
- **Positive (RED) probe** of the multimeter connects to **Pin 9** on the Arduino.
- **Negative (BLACK) probe** connects to the **GND rail** on the breadboard.

This setup allows you to monitor the output voltage sent to the LED for verification.

---

## 🧠 How It Works

- The **LDR** senses the ambient light level.
- The **Arduino reads** this value via **Analog Pin A0** and decides whether to turn the LED on or off based on the light threshold.
- The **LED** visually indicates whether it's dark or bright.
- The **multimeter** shows the actual voltage being output from Pin 9, providing a second layer of observation.

