// Pin definitions for motor driver
// Pin Numbers 2, 3, 4, 5 are for PWM
#define M1LH 2 // Format: Motor 1 Left-High  - Pin Number 2
#define M1RH 3 // .       Motor 1 Right-High - Pin Number 3
#define M1LL 14 // .
#define M1RL 15 // .
#define M2LH 4 // .
#define M2RH 5 // .
#define M2LL 16 // .
#define M2RL 17 // .

void setup() {
    pinMode(M1LH, OUTPUT);
    pinMode(M1RH, OUTPUT);
    pinMode(M1LL, OUTPUT);
    pinMode(M1RL, OUTPUT);
    pinMode(M2LH, OUTPUT);
    pinMode(M2RH, OUTPUT);
    pinMode(M2LL, OUTPUT);
    pinMode(M2RL, OUTPUT);
    Serial.begin(9600);
}

void loop() {
    // Call the movement functions here (●'◡'●)
    // Note - Speed factor is a required argument
    // 0 being stopped, 255 being at maximum speed
    // Example usage: backward(255);
    // We'll be using the maximum value always
    // since we want robot to go vroom vroom
    // Good Luck (❁´◡`❁)
    forward(180);
    delay(200);
}

// Movement Functions are defined assuming:
// Motor 1 is connected to - left tire
// Motor 2 is connceted to - right tire

// Speed factor - Value ranges from 0 to 255
void forward(int speed_factor) { // Turns both motor CW -> forward direction
    // Motor 1 -> Clockwise
    analogWrite(M1LH, speed_factor);
    analogWrite(M1RH, 0);
    digitalWrite(M1LL, LOW);
    digitalWrite(M1RL, HIGH);

    // Motor 2 -> Clockwise
    analogWrite(M2LH, speed_factor);
    analogWrite(M2RH, 0);
    digitalWrite(M2LL, LOW);
    digitalWrite(M2RL, HIGH);
}

void backward(int speed_factor) { // Turns both motor CCW -> backward direction
    // Motor 1 -> Counter Clockwise
    analogWrite(M1LH, 0);
    analogWrite(M1RH, speed_factor);
    digitalWrite(M1LL, HIGH);
    digitalWrite(M1RL, LOW);

    // Motor 2 -> Counter Clockwise
    analogWrite(M2LH, 0);
    analogWrite(M2RH, speed_factor);
    digitalWrite(M2LL, HIGH);
    digitalWrite(M2RL, LOW);
}

void left(int speed_factor) { // Turns left motor CCW and right motor CW
    // Robot turns left around its own axis
    // Motor 1 -> Counter Clockwise
    analogWrite(M1LH, 0);
    analogWrite(M1RH, speed_factor);
    digitalWrite(M1LL, HIGH);
    digitalWrite(M1RL, LOW);

    // Motor 2 -> Clockwise
    analogWrite(M2LH, speed_factor);
    analogWrite(M2RH, 0);
    digitalWrite(M2LL, LOW);
    digitalWrite(M2RL, HIGH);
}

void right(int speed_factor) { // Turns left motor CW and right motor CCW
    // Robot turns right around its own axis
    // Motor 1 -> Clockwise
    analogWrite(M1LH, speed_factor);
    analogWrite(M1RH, 0);
    digitalWrite(M1LL, LOW);
    digitalWrite(M1RL, HIGH);

    // Motor 2 -> Counter Clockwise
    analogWrite(M2LH, 0);
    analogWrite(M2RH, speed_factor);
    digitalWrite(M2LL, HIGH);
    digitalWrite(M2RL, LOW);
}

void stop_all() { // Turns both motor off -> Stopped
    // Motor 1 -> Stop
    analogWrite(M1LH, 0);
    analogWrite(M1RH, 0);
    digitalWrite(M1LL, LOW);
    digitalWrite(M1RL, LOW);

    // Motor 2 -> Stop
    analogWrite(M2LH, 0);
    analogWrite(M2RH, 0);
    digitalWrite(M2LL, LOW);
    digitalWrite(M2RL, LOW);
}
