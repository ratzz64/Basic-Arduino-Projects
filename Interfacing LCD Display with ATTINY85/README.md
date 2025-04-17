# 🖥️ 16x2 LCD with ATtiny85 – Real-Time Counter Display
This project connects a 16x2 LCD to an ATtiny85 microcontroller to display static text and a live-updating timer using minimal I/O pins in 4-bit mode. It's powered by a regulated 5V source and designed to be compact and energy-efficient.

## 🔌 Connections
### 1. Power Connections
-VSS → GND

-VDD → +5V (regulated from a 6V battery pack)

-V0 (Contrast Control) → Middle pin of a 10kΩ potentiometer

-Other potentiometer pins → One to +5V, one to GND

### 2. Control Pins (ATtiny85)
-RS (Register Select) → Pin 0 (PB0)

-RW (Read/Write) → GND (Write-only mode)

-E (Enable) → Pin 1 (PB1)

### 3. Data Pins (4-bit Mode)
D4 → Pin 2 (PB2)

D5 → Pin 3 (PB3)

D6 → Pin 4 (PB4)

D7 → Pin 5 (PB5)

### 4. Power Source
-Powered by a 4xAA (6V) battery pack

-A voltage regulator steps it down to 5V for both the LCD and the ATtiny85

## ⚙️ Working Principle
### 📌 LCD Initialization
The LCD is initialized in 4-bit mode using the LiquidCrystal library.

Configuration sets the display to 16 columns × 2 rows.

## 📝 Displaying Text
-Line 1: Displays a static message – "this is me"

-Line 2: Displays "hello" followed by a live counter value.

### ⏱️ Real-Time Counter
-Uses the millis() function to measure time since startup.

-Displays the elapsed seconds next to "hello".

-Updates every 100 milliseconds for smooth display.

## 🔁 Loop Behavior
Cursor is positioned correctly before each counter update.

A short 100ms delay improves readability and reduces flicker.

## 📦 Requirements
ATtiny85 microcontroller

16x2 LCD (HD44780 compatible)

10kΩ potentiometer

4xAA battery pack (6V)

Voltage regulator (5V output)

Jumper wires and breadboard

## ✅ Features
Low power, portable display solution

Minimal pin usage with 4-bit LCD mode

Real-time counter functionality

Beginner-friendly with modular components
