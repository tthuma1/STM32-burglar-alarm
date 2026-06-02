#ifndef MFRC522_H
#define MFRC522_H

#include "stm32h7xx_hal.h"
#include <stdint.h>

/* Register addresses */
#define MFRC522_COMMAND_REG      0x01
#define MFRC522_VERSION_REG      0x37

/* Commands */
#define MFRC522_CMD_SOFTRESET    0x0F

/* Public API */
void MFRC522_Init(void);
void MFRC522_Reset(void);

void MFRC522_WriteRegister(uint8_t reg, uint8_t value);
uint8_t MFRC522_ReadRegister(uint8_t reg);

uint8_t MFRC522_GetVersion(void);

#endif