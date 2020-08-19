/* Laser Shooting Gallery Base Station
 * Handles operation of the target "base station"
 * 
 * created 18 Aug 2020
 * by Rob Vandelinder
 * rob@eastcoastdev.ca
 */

#include <Servo.h>

Servo servo;

const int sensorPin = A0;
const int ledPin = 4;
int lightLevel;
int ambientLightLevel;

void setup() {
  Serial.begin(9600);
  servo.attach(7);
  servo.write(90); 
  pinMode(ledPin, OUTPUT);
  pinMode(sensorPin, INPUT);
}

void loop() {

  lightLevel = map(analogRead(sensorPin),0,1023,0,100);
  if (lightLevel > 80) {
    servo.write(170);
    blinkLED(3);
    delay(2000);
    servo.write(90);
  }
}

void blinkLED(int numTimes) {
  for (int a = 1; a <= numTimes; a++) {
    digitalWrite(ledPin, HIGH);
    delay(100);
    digitalWrite(ledPin, LOW);
  }
}

// DIAGNOSTIC TESTING METHODS
void testSensor() {
  // night with overheads lightLevel ~30
  // daytime lightLevel ~
  lightLevel = map(analogRead(sensorPin),0,1023,0,100);
  Serial.print("Light level: ");
  Serial.print(lightLevel);
  Serial.print("\n\n");
}

void testServo() {
  servo.write(90);
  delay(500);
  servo.write(170);
  delay(500);
  servo.write(90);
}
