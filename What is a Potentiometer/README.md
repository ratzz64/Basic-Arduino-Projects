# 🎚️ Potentiometer Connected to Battery for Adjustable Voltage

This simple hardware project demonstrates how to use a **potentiometer** to adjust voltage from a **battery source**, making it a useful component in circuits requiring variable input like sensors, LED dimming, or analog signal testing.

---

## 🧰 Components Required

- Potentiometer (3-pin type)  
- Battery (e.g., 9V or any suitable DC source)  
- Jumper wires or connecting wires  

---

## 🔌 Circuit Connection Steps

### 1. Identify Potentiometer Pins
- **Pin 1**: Input voltage  
- **Pin 2**: Wiper (middle pin) — provides the **adjustable output**  
- **Pin 3**: Ground or common voltage

### 2. Connect the Battery
- Connect **Pin 1** of the potentiometer to the **positive terminal** of the battery.
- Connect **Pin 3** to the **negative terminal** of the battery.

### 3. Use the Adjustable Output
- The **middle pin (Pin 2)** provides a variable voltage depending on the rotation of the knob.
- This output can be connected to another component, like:
  - An **LED** for dimming
  - An **Arduino analog input**
  - A **sensor reference voltage**
  - Any component that requires an adjustable DC voltage

---

## ⚙️ How It Works

- Rotating the potentiometer shifts the position of the internal wiper.
- This changes the resistance ratio between the ends of the potentiometer, resulting in a **smooth variation of voltage** on the middle pin.
- This setup doesn’t require a microcontroller and is often used in analog circuits for testing and tuning.

