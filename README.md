
<p align="center">
    <img src="/images/arduino.png" width=200 style="max-width:50%">
</p>

# Shooting Gallery 

## Status: ON HOLD (Waiting for parts)

## Description

Arduino-powered shooting gallery game for 2 players.  Toy guns use a laser emitter to hit various targets, at the end of each round the player with the most points wins.   Contact switches are used for firing and to simulate reloading.  Players have a limited amount of shots in each round, remaining shots are shown on a single-digit display.  

## Current Version

### v0.1 - First Prototype

This was the minimum viable product version.  A simple laser pointer is used to trigger the photocell, which uses a servo to drop the target when a hit is registered.
 
<p align="center">
 <img src="/images/prototype_test.gif" style="max-width:100%">
</p>
<p align="center">
  <i>It works!</i>
</p> 
<p align="center">
 <img src="/images/laser_gun_prototype.jpg" style="max-width:50%">
</p>
<p align="center">
  <i>The "gun" - I've invented the laser pointer</i>
</p> 
<p align="center">
 <img src="/images/target_base_prototype.jpg" style="max-width:50%" >
</p>
<p align="center">
  <i>Close-up of the target base</i>
</p>

## Hardware Used

- Arduino Uno R3
- SG90 servo motor
- 9v alkaline battery
- KY-008 laser diode
- 1 x red LED
- 1 x 220 ohm resistor
- 1 x photocell
- 1 x 10k ohm resistor
- 5V USB charger

## Diagrams

<p align="center">
 <img src="/images/target_base_prototype_fritzing.png" style="max-width:50%" >
</p>
<p align="center">
  <i>Target Fritzing Diagram</i>
</p>
<p align="center">
 <img src="/images/gun_prototype_fritzing.png" style="max-width:50%" >
</p>
<p align="center">
  <i>"Gun" Fritzing Diagram</i>
</p>


## Hardware Planned For Final Version

*Target module*
- Arduino Mega2560
- 5 x SG90 servo motors
- 5 x red LED
- 13 x 220 ohm resistor (red/white LEDs)
- 5 x photocell
- 5 x 10k ohm resistor (photocells)
- 2 x 4-digit 7-segment display (scores/winner)
- 1 x one-digit 7-segment display (ammo)
- 8 x white LED
- Toggle switch for power
- Momentary pushbutton for reset
- Breadboard power supply (for servos)
- 5V dual-output USB charger

*Each Gun*
- Nano v3
- 9v alkaline battery (or 18650)
- Slide switch for power
- KY-008 laser diode
- 2 x momentary pushbutton (trigger/pump-action reloading)

## To-Do List

- *WIP*

<!-- ## Versions -->

