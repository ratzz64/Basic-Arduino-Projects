# 🕹️ Motion Controlled Colour Changer

A simple motion detection system using a **PIR sensor**, **RGB LED**, and **buzzer** to alert and indicate motion status visually and audibly.

---

## 📦 Components Used

- Arduino Uno  
- PIR Motion Sensor  
- RGB LED (common cathode)  
- Buzzer  
- 3 × 220Ω Resistors  
- Breadboard and jumper wires  

---

## 🔌 Circuit Wiring Instructions

### ✅ PIR Sensor
- **VCC** → Arduino **5V**
- **GND** → Arduino **GND**
- **OUT (Signal Pin)** → **D7**

### ✅ Buzzer
- **Positive terminal** → **D3**
- **Negative terminal** → **GND**

### ✅ RGB LED (Common Cathode)
- **Cathode** (shortest leg) → **GND**
- **Red pin** → 220Ω resistor → **D9**
- **Green pin** → 220Ω resistor → **D11**
- **Blue pin** → 220Ω resistor → **D10**

---

## ⚙️ Functionality

- When **motion is detected** by the PIR sensor:
  - The **buzzer** turns **ON**
  - The **RGB LED** lights up **blue**
- When **no motion is detected**:
  - The **buzzer** turns **OFF**
  - The **RGB LED** lights up **magenta** (red + blue)

This behavior can be customized by changing the RGB values and buzzer logic in the code.

---

## 💡 How It Works

1. The **PIR sensor** continuously monitors for motion.
2. On detecting movement (`digitalRead(pir) == HIGH`), the Arduino:
   - Activates the **buzzer** (`digitalWrite(buzzer, HIGH)`)
   - Sets the RGB LED to **blue** using PWM
3. When no motion is detected:
   - Deactivates the buzzer
   - Sets the RGB LED to **magenta** by mixing red and blue

