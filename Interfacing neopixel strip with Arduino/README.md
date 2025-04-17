# NeoPixel Chase Effect with Arduino Uno

This project demonstrates a simple color chase effect on a NeoPixel LED strip controlled by an Arduino Uno. It cycles through red, green, and blue colors, lighting up the LEDs one by one to create a dynamic chase animation.

![Circuit Diagram](/mnt/data/Circuit.png)

## 🧰 Components Used

- Arduino Uno R3  
- WS2812 NeoPixel LED Strip (4 LEDs)  
- Breadboard (optional, depending on your setup)  
- Jumper Wires  
- USB Cable for Arduino Power & Programming

## ⚡ Circuit Connections

| Arduino Uno Pin | NeoPixel Pin | Function         |
|------------------|--------------|------------------|
| D6               | DIN          | Data Input       |
| 5V               | VCC          | Power Supply     |
| GND              | GND          | Ground Connection|

## 💡 How It Works

The Arduino sends color data to the NeoPixel strip using digital pin 6. The program loops through three colors—red, green, and blue—and lights up one LED at a time while turning off the previous one to create a chasing animation effect.

## 🚀 Getting Started

To run the project:

1. Connect the components as shown in the image.
2. Upload the sketch to your Arduino Uno using the Arduino IDE.
3. Watch the LEDs light up in a chasing rainbow pattern.

## 📦 Libraries Required

- [Adafruit NeoPixel](https://github.com/adafruit/Adafruit_NeoPixel)

Make sure to install the Adafruit NeoPixel library through the Arduino Library Manager before uploading the code.

