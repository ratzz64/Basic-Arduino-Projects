/* Lets start */
const float baselineTemp = 20.0;
const int sensorPin = A2, redPin = 0, 
          bluePin = 1, greenPin = 2;
float temp;

// Color arrays
// Format: color[] = {R, G, B};
bool yellow[] = {1, 1, 0}, red[] = {1, 0, 0},
     green[] = {0, 1, 0}, blue[] = {0, 0, 1},
     white[] = {1, 1, 1}, cyan[] = {0, 1, 1},
     off[] = {0, 0, 0};

void setup() {
    pinMode(redPin, OUTPUT);    // Fixed typo: 'pinhMode' -> 'pinMode'
    pinMode(bluePin, OUTPUT);
    pinMode(greenPin, OUTPUT);
    pinMode(5, OUTPUT);         // Additional pin (likely for power)
    digitalWrite(5, HIGH);      // Enable power (e.g., for RGB LED)
}

void loop() {
    readSensor();
    colorConditions();
}

void colorConditions() {
    /* blink white */ if(temp <= 9) ledControlBlink(white);
    /* blink red   */ if(temp >= 35) ledControlBlink(red);
    /* white       */ if(temp >=10 && temp <= 14.0) ledControl(white);
    /* cyan        */ if(temp >= 15.0 && temp <=20.0) ledControl(cyan);
    /* green       */ if(temp >= 21 && temp <=24) ledControl(green);
    /* yellow      */ if(temp >=25 && temp <=29) ledControl(yellow);
    /* red         */ if(temp >= 30) ledControl(red);
}

// Missing functions (implied but not shown in snippet):
// void readSensor() { ... }
// void ledControl(bool color[]) { ... }
// void ledControlBlink(bool color[]) { ... }

// Takes a boolean array for each RGB value
void ledControl(bool color[]) {
    digitalWrite(redPin, color[0]);
    digitalWrite(greenPin, color[1]);
    digitalWrite(bluePin, color[2]);
}

void ledControlBlink(bool color[]) {
    ledControl(color);
    delay(500);
    ledControl(off);  // Corrected from 'cff' to 'off'
    delay(500);
}

// Reads data and converts to degree Celsius
void readSensor() {
    int sensor = analogRead(sensorPin);
    float volt = sensor * 3.0;
    volt /= 1024.0;
    temp = (volt - 0.5) * 100;  // TMP36 sensor conversion formula
}