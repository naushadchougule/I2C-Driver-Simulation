# I2C Driver Simulation

## Overview
This project implements a software-based I2C Driver Simulation in C. It demonstrates the fundamental sequence of I2C communication without requiring physical hardware. The project follows a modular driver structure using separate source and header files.

## Features
- I2C Driver Initialization
- START Condition Generation
- Slave Address Transmission
- Register Address Transmission
- ACK (Acknowledgment) Handling
- Data Transmission
- Data Reception
- STOP Condition Generation

## Project Structure
```
I2C-Driver-Simulation/
│── main.c
│── i2c.c
│── i2c.h
│── README.md
```

## Working
1. Initialize the I2C driver.
2. Generate the START condition.
3. Send the slave device address.
4. Receive ACK from the slave.
5. Send the register address.
6. Receive ACK from the slave.
7. Transmit one byte of data.
8. Receive ACK from the slave.
9. Read the transmitted data.
10. Generate the STOP condition.

## Sample Output
```
I2C Initialized

START Condition Generated

Master Sent Slave Address : 0x48
Slave -> ACK

Register Address      : 0x01
Slave -> ACK

Master Transmitted : 0x55
Slave -> ACK

Slave Returned : 0x55
Main Received : 0x55

STOP Condition Generated
```

## Technologies Used
- C Programming
- GCC / G++
- Visual Studio Code

## Purpose
This project demonstrates the basic workflow of I2C communication, including addressing, acknowledgment, data transfer, and driver organization through a software simulation.
