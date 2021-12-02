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

# Design

## Structural Diagram

![struct Dia](https://user-images.githubusercontent.com/94296796/144424428-021b9e01-d908-4762-b4c9-c520f3c04bc1.jpg)

## Behavioural Diagram

![BehaviouralDia](https://user-images.githubusercontent.com/94296796/144100087-d0a6bec9-bf96-44f6-9597-ad05c7f5e6a7.png)

## Block Diagram 

![BD2](https://user-images.githubusercontent.com/94296796/144100009-11a72848-63d5-427c-a271-7913a0310082.jpg)

# Simulations

## When Requirements not met

Case1: When both the Seat Switch and HeaterSwitch turned off  

![case1](https://user-images.githubusercontent.com/94296796/144425440-a9d5a35c-a206-4f1d-a290-b28836b3ef85.png)

Case2: When Seat Switch is on and Heater Switch is OFF

![case2](https://user-images.githubusercontent.com/94296796/144425467-60d07887-e73c-4346-9826-098fa7b9b8e7.png)

Case 3: When Seat switch is OFF and Heater Switch is ON

![case3](https://user-images.githubusercontent.com/94296796/144425501-730743b9-cd14-408d-be0b-eb19e7dd5462.png)

Case4: When both the switches are ON-LED will GLOW

![case4](https://user-images.githubusercontent.com/94296796/144425527-4fed6f81-558a-4660-9fef-4916ff7e6b11.png)

# Test Plan

## High Level Test plan
Test ID |	Description |	Exp I/P |	Exp O/P | Actual Out | Type of Test
|--------|-------------|---------|---------|------------|-------------
| HLT_01 | Seat Switch is ON and Heater Switch is OFF | Seat Switch is ON | LED will not GLOW | SUCCESS | Requirement Based 
| HLT_02 | Seat Switch is OFF and Heater Switch is ON | Heater Switch is ON |  LED will not GLOW | SUCCESS | Requirement Based 
| HLT_03 | Seat Switch is ON and Heater Switch is ON | Both Switches are ON | LED will GLOW | SUCCESS | Requirement Based 


## Low level test plan
|Test ID | Description | Exp I/P | Exp O/P | Actual Out | Type of Test
|--------|-------------|---------|---------|------------|-------------
| LLR_01 | Duty Cycle | 20% | Temperature displayed in the LCD | SUCCESS | Requirement Based        
| LLR_02 | Duty Cycle | 40% | Temperature displayed in the LCD | SUCCESS | Requirement Based      
| LLR_03 | Duty Cycle | 70% | Temperature displayed in the LCD | SUCCESS | Requirement Based      
| LLR_04 | Duty Cycle | 95% | Temperature displayed in the LCD | SUCCESS | Requirement Based    




