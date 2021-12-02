# Requirements

## Introduction

The Vehicle Seat Heat Monitoring System is capable of maintaining of heat in the vehicles seats. In our project, the sensor will sense is the driver has been seated or not and if the driver seated then he need to set the temperature accordingly. Based on that our controller will set the heater to required temperature. The Heater will generate the heat and a LCD display will show requested the temperature. In our project we have used ATmega328 microcontroller along with temperature sensor, Switches, Heat generator,and LCD display,etc.

## Features

- The System will sense is driver or passenger seated or not.
- Driver or Passenger has the access to modify the temperature in the vehicle.
- As per Drivers request, Heater will generate the heat accordingly.
- It is best for European Countries.
- Low cost and robust system.
- Modular Approach.

## Components Used

1. Power Supply
2. Switches
3. Temperature sensor
4. LED
5. LCD Display
6. AVR Atmega 328 Microcontroller

## Software Used

- SimulIDE
- Visual Studio Code

## SWOT

### Strengths

- User Friendly
- Easy to alter the temperature inside the vehicles.
- Modular Approach
- Low cost and Robust system.

### Weakness

- Its only applicable for those countries which are having low temperature.

### Opportunities

- It can be implemented by having both Heater and AC.

### Threats

- Not suitable for average or high temperature places.

## 4W's and 1'H

### WHY

- Low cost and robust system.

### WHAT 

- Vehicle seat heating system

### WHERE 

- Used in Automotives

### WHEN 

- At low Temperatures

### HOW

- The sensor will sense is the driver has been seated or not and if the driver seated then he need to set the temperature accordingly. Based on that our controller will set the heater to required temperature. 

## Detail requirements

### High Level Requirements

| ID | Description | Status |
| ----| ----------- | -------- |
| HLR1      | Microcontroller| Implemented |
| HLR2   | Temperature Sensor | Implemented |
| HLR3   | Heat Generation | Implemented |
| HLR4   | Display | Implemented |
| HLR5   | Software used | Implemented |

### Low Level Requirements

| ID | Description | Status |
| ---- | ----------- |-------- |
| HLR1_LLR1    | ATmega328     | Implemented |
| HLR2_LLR1   | LM35 and ADC | Implemented |
| HLR2_LLR2   | ADC with PWM | Implemented |
| HLR4_LLR1   | LCD and LED | Implemented |
| HLR5_LLR1   | Visual Studio Code with AVR GCC compiler | Implemented |
| HLR5_LLR2   | SimulIDE | Implemented |


