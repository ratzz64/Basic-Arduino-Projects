# 📡 Arduino Photodiode Sensor Reader

This project demonstrates how to read values from a **photodiode** using an Arduino Uno and output the data to the Serial Monitor. The photodiode reacts to changes in light, providing analog values that the Arduino can read and process.

## 🖥️ Overview

The Arduino continuously reads the analog signal from a photodiode connected to pin A0 and prints the readings to the Serial Monitor. This setup is great for detecting changes in light intensity.



## 🧰 Components Used

- Arduino Uno R3  
- Photodiode  
- 1kΩ Resistor  
- Breadboard and jumper wires  
- USB cable for power and data

## 🔗 Connections

- The **photodiode** is connected in series with a 1kΩ resistor.
- One end of the photodiode-resistor combo goes to **5V**, and the other end goes to **GND**.
- The analog voltage from the junction of the photodiode and resistor is connected to **A0** on the Arduino.


## 🚀 Getting Started

1. Assemble the circuit as shown in the image above.
2. Connect your Arduino to your computer with a USB cable.
3. Upload the code.
4. Open the Serial Monitor to see real-time photodiode readings.

## 📝 Notes

- The analog values range from 0 (no light) to 1023 (maximum light).
- You can use this data to trigger actions based on lighting conditions (like turning on an LED or activating a buzzer).

