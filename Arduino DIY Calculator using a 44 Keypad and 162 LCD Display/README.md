
# Arduino DIY Calculator using a 44 Keypad and 162 LCD Display

## Circuit Connections 
### Follow these steps to connect the keypad and LCD to the Arduino: 
1. Keypad Connections: 
-The 4 row pins (R1, R2, R3, R4) and 4 column pins (C1, C2, 
C3, C4) of the 4×4 keypad are connected to PWM pins 0-7 on 
the Arduino, respectively. 

2. LCD Connections: 
-Data Pins: The LCD's DB4 to DB7 pins are connected to 
Arduino digital pins 8 to 11. 

-Control Pins: 

■ The Enable (E) pin of the LCD is connected to digital 
pin 12 of the Arduino. 

■ The Register Select (RS) pin of the LCD is connected to 
digital pin 13 of the Arduino. 

-Backlight & Contrast: 

■ LED1 (backlight) is connected to GND via a 1kΩ 
resistor. 

■ Vo (contrast) and GND of the LCD are both connected to 
GND of the Arduino. 

■ The Vo and RW pins of the LCD are shorted (grounded) 
to set it in write mode. 

■ The VCC pin and the second LED pin of the LCD are 
shorted and connected to the 5V pin of the Arduino to 
power the display




