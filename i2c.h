#ifndef I2C_H
#define I2C_H

#include <stdint.h>

void I2C_Init(void);

void I2C_Start(void);

void I2C_Stop(void);

void I2C_SendAddress(uint8_t address);

/* Add this function */
void I2C_SendRegister(uint8_t reg);

void I2C_WriteByte(uint8_t data);

uint8_t I2C_ReadByte(void);

int I2C_WaitForAck(void);

#endif
