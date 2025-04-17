# 🔢 DIY Arduino Calculator Using 4×4 Keypad and 16×2 LCD

This project turns your Arduino into a basic **calculator** capable of performing simple arithmetic operations like addition, subtraction, multiplication, and division. It uses a **4×4 matrix keypad** for input and a **16×2 LCD** to display the results.

---

## 🧰 Components Required

- Arduino Uno  
- 4×4 Matrix Keypad  
- 16×2 LCD Display (with or without I2C)  
- 1kΩ Resistor (for LCD backlight)  
- Jumper wires  
- Breadboard  

---

## 🔌 Circuit Connections

### Keypad Connections
- Connect the **4 row pins** (R1–R4) and **4 column pins** (C1–C4) of the keypad to Arduino **PWM pins 0 through 7**.  
- These pins allow the Arduino to scan for key presses by checking row/column intersections.

### LCD Connections

#### Data Pins
- **DB4 → D8**  
- **DB5 → D9**  
- **DB6 → D10**  
- **DB7 → D11**  

#### Control Pins
- **Enable (E)** → **D12**  
- **Register Select (RS)** → **D13**

#### Backlight & Contrast
- **LED1** (LCD backlight) is connected to **GND** through a **1kΩ resistor**  
- **Vo** (contrast) is connected to **GND** to set visibility  
- **RW** is shorted to **GND** to enable write mode  
- **VCC** and the **second LED pin** of the LCD are shorted and connected to **5V**

---

## ⚙️ How It Works

1. **Input via Keypad**:  
   Users enter numbers and operations using the 4×4 keypad. Each key corresponds to a number, operator, or control function (like "=" or "C").

2. **Processing via Arduino**:  
   The Arduino detects key presses and stores them as characters or values. Once the equation is complete, it performs the calculation.

3. **Output on LCD**:  
   The 16×2 LCD displays the full equation and the result, allowing for a simple and interactive user experience.

---

## 🔍 Use Cases

- Basic embedded system calculators  
- Learning tool for matrix keypads and LCD interfaces  
- DIY electronics and microcontroller practice project

