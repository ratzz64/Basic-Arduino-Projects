# 🌡️ ATtiny85 Temperature Sensor Project with TMP36

This project demonstrates how to use an **ATtiny85 microcontroller** with a **TMP36 analog temperature sensor** to measure temperature and optionally indicate high/low temperature using an **LED**.

---

## 🔌 Circuit Connections

### 🪫 Power Connections
- **VCC (ATtiny85)** → Connect to **+** terminal of power source  
- **GND (ATtiny85)** → Connect to **−** terminal of power source  

### 🌡️ TMP36 Sensor Connections
- **VCC (TMP36)** → Connect to **+** terminal of power source  
- **GND (TMP36)** → Connect to **−** terminal of power source  
- **Vout (TMP36)** → Connect to **PB2 (Pin 7)** of ATtiny85  

### 💡 LED Indicator (Optional)
- **Anode (long leg)** → Connect to **PB0 (Pin 5)** of ATtiny85  
- **Cathode (short leg)** → Connect to **GND** through a **220Ω resistor**

---

## 🧠 Working Principle

- The **TMP36** outputs an **analog voltage** proportional to the surrounding temperature.
- The **ATtiny85** reads this voltage on **PB2** and calculates the corresponding temperature.
- Based on the temperature value:
  - You can **light up an LED** if the temperature is too high or low (user-defined threshold).
  - This allows simple **visual monitoring** of ambient conditions.

---

## 📦 Components Required

- ATtiny85 Microcontroller  
- TMP36 Temperature Sensor  
- LED (optional)  
- 220Ω Resistor (for LED)  
- Jumper wires  
- Power Source (e.g., 3.3V or 5V battery or regulator)

---



## 📚 Applications

- Compact temperature monitoring systems  
- Battery-powered environmental sensors  
- Basic smart home temperature alert systems  
- Educational microcontroller projects  

---

