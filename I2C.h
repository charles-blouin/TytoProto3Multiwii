#ifndef TYPE_H_
#define TYPE_H_

extern uint8_t rawADC[6];



void i2c_init(void);
void i2c_rep_start(uint8_t address);
void i2c_write(uint8_t data );
void i2c_stop(void);
void i2c_write(uint8_t data );
void i2c_writeReg(uint8_t add, uint8_t reg, uint8_t val);
void i2c_read_reg_to_buf(uint8_t add, uint8_t reg, uint8_t *buf, uint8_t size) ;
uint8_t i2c_readReg(uint8_t add, uint8_t reg);
uint8_t i2c_readAck();
uint8_t i2c_readNak();

void i2c_getSixRawADC(uint8_t add, uint8_t reg);

#endif /* TYPE_H_ */