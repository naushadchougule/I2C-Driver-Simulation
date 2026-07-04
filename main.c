#include <stdio.h>
#include "i2c.h"

int main(void)
{
    uint8_t data;

    I2C_Init();

    I2C_Start();

    /* Send Slave Address */
    I2C_SendAddress(0x48);

    /* Send Register Address */
    I2C_SendRegister(0x01);

    /* Write Data */
    I2C_WriteByte(0x55);

    /* Read Data */
    data = I2C_ReadByte();

    printf("Main Received : 0x%02X\n", data);

    I2C_Stop();

    return 0;
}
