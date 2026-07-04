#include <stdio.h>
#include "i2c.h"

static uint8_t i2c_data = 0;

void I2C_Init(void)
{
    printf("I2C Initialized\n");
}

void I2C_Start(void)
{
    printf("START Condition Generated\n");
}

void I2C_Stop(void)
{
    printf("STOP Condition Generated\n");
}

void I2C_SendAddress(uint8_t address)
{
    printf("Master Sent Slave Address : 0x%02X\n", address);
    I2C_WaitForAck();
}

/* New Function */
void I2C_SendRegister(uint8_t reg)
{
    printf("Register Address      : 0x%02X\n", reg);
    I2C_WaitForAck();
}

void I2C_WriteByte(uint8_t data)
{
    i2c_data = data;
    printf("Master Transmitted : 0x%02X\n", data);
    I2C_WaitForAck();
}

uint8_t I2C_ReadByte(void)
{
    printf("Slave Returned : 0x%02X\n", i2c_data);
    return i2c_data;
}

int I2C_WaitForAck(void)
{
    printf("Slave -> ACK\n");
    return 1;
}
