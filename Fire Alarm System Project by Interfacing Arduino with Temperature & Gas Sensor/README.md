# 🔧 Fire Alarm System
This project utilizes multiple sensors—temperature and gas sensors—to monitor environmental conditions and trigger outputs like LEDs and a buzzer based on the readings. The setup includes analog data processing, digital control, and visual/audio feedback, making it a great beginner-to-intermediate Arduino project for learning sensor integration and alert systems.

## 🔌 Circuit Connections Explanation
### To set up the circuit, start by establishing the power and ground connections:

1.The 5V pin of the Arduino is connected to the power rail of the breadboard.

2.The GND pin of the Arduino is connected to the ground rail of the breadboard.

3.These rails serve as the power and ground supply for all components in the circuit.

## 🌡️ Temperature Sensor Connections
### The temperature sensor has three pins: Vs (Supply), Vout (Output), and GND (Ground).

1.Vs → Connected to the 5V power rail.

2.GND → Connected to the ground rail.

3.Vout → Connected to Analog pin A1 on the Arduino.

## 🧪 Gas Sensor Connections
### The gas sensor includes six pins, three of which are for power.

1.Three power pins → Connected to the 5V power rail.

2.Analog Output pin → Connected to Analog pin A0 on the Arduino.

3.Middle pin → Connected to the ground rail.

4.Other pin → Connected through a resistor to the ground rail.

## 🔊 Piezo Buzzer Connections
### The piezo buzzer is connected externally:

1.GND pin → Connected to the ground rail.

2.Signal pin → Connected to Digital pin 7 on the Arduino.

## 💡 LED Connections
### The LED is connected directly to the Arduino:

1.Cathode (-) → Connected to GND of the Arduino.

2.Anode (+) → Connected through a resistor to Digital pin 13 of the Arduino.
