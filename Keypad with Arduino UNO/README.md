# 🎛️ Connecting a Keypad to Arduino UNO
Integrating a 4×4 matrix keypad with the Arduino UNO allows user interaction through a physical interface. The keypad has 8 pins, divided into:

4 Row Pins: R1, R2, R3, R4

4 Column Pins: C1, C2, C3, C4

## 🔌 Wiring the Keypad
### Connect the keypad pins to the Arduino UNO as follows:

#### Row Pins

R1 → Digital pin 9

R2 → Digital pin 8

R3 → Digital pin 7

R4 → Digital pin 6

#### Column Pins

C1 → Digital pin 5

C2 → Digital pin 4

C3 → Digital pin 3

C4 → Digital pin 2

## 📌 Tip: No resistors are required. Use the Keypad library to handle key detection and debouncing.
