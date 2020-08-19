
<p align="center">
    <img src="/images/arduino.png" width=200>
</p>

# Shooting Gallery 

## Description

Arduino-powered shooting gallery game for 2 players.  Toy guns use a laser emitter to hit various targets, at the end of each round the player with the most points wins.   Contact switches are used for firing and to simulate reloading.  Players have a limited amount of shots in each round, remaining ammo in shown on a single-digit display on the gun.  Guns will communicate with the target "base station" via bluetooth for player turns and remaining shots.

## Software

[Ino file](https://github.com/robjvan/shooting_gallery/blob/master/shooting_gallery_ino/shooting_gallery_ino.ino)

---

## Diagrams

<p align="center">
    <img src="/images/image_placeholder.png" width=1024>
</p>
<p align="center">
    <i>Prototype v1 with "gun"</i>
</p>

## Hardware Used For Prototype

- Arduino Uno R3
- SG90 servo motor
- 9v alkaline battery
- KY-008 laser diode
- 1 x red LED
- 1 x 220 ohm resistor
- 1 x photocell
- 1 x 10k ohm resistor
- 5V USB charger


## Hardware Planned For Final Version

*Target module*
- Arduino Mega2560
- HM-05 BLE module
- 5 x SG90 servo motor
- 5 x red LED
- 13 x 220 ohm resistor (red/white LEDs)
- 5 x photocell
- 5 x 10k ohm resistor (photocells)
- 2 x 4-digit 7-segment display (scores/winner)
- 8 x white LED
- Toggle switch for power
- Momentary pushbutton for reset
- Breadboard power supply (for servos)
- 5V dual-output USB charger

*Each Gun*
- Nano v3
- HM-05 BLE module
- 9v alkaline battery (or 18650)
- KY-008 laser diode
- 2 x momentary pushbutton (trigger/pump-action reloading)
- 1 x one-digit 7-segment display (ammo)

---

## To-Do List

- *WIP*


---

## Versions

*n/a*
