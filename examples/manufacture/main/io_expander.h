#include <stdio.h>

void i2c_init();
void pca9535_write_register(uint8_t reg_addr, uint8_t data);
uint8_t pca9535_read_register(uint8_t reg_addr);