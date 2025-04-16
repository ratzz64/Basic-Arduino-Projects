# 🎹 Arduino Piano with Push Buttons
This project simulates a simple piano using an Arduino Uno, a buzzer, and push buttons. Each button corresponds to a musical note (C, D, E, F, G, A, B), and pressing one plays the matching tone through the buzzer.

## 🧰 Components & Connections
1.Arduino Uno – Controls the entire circuit.

2.Push Buttons (C, D, E, F, G, A, B) – Each connected to a digital input pin on the Arduino.

3.Buzzer – Connected to digital pin 13, generates sound.

4.Breadboard & Jumper Wires – Used for easy wiring and connections.

### Wiring Overview
Each push button is connected to a digital input pin (e.g., 2 to 8).

Internal pull-up resistors are used (configured in the code), so the buttons remain HIGH until pressed.

The buzzer is connected to digital pin 13 and ground.

## ⚙️ Working Principle
Each button is mapped to a specific musical note frequency (defined in the code).

When a button is pressed, the corresponding tone is sent to the buzzer.

The buzzer plays the note, creating a simple piano-like experience.

Button | Note | Frequency (Hz)

C | C4 | 262

D | D4 | 294

E | E4 | 329

F | F4 | 349

G | G4 | 392

A | A4 | 440

B | B4 | 493
## 🛠️ How to Use
1.Connect your components as described above.

2.Upload the code to your Arduino.

3.Press any button to hear its note.


