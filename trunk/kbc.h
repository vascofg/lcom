#ifndef __KBC_H
#define __KBC_H



int read_kbc();
int write_kbc(unsigned long port, unsigned char byte);


#define DELAY_US 20000
#define STAT_REG 0x64
#define DATA_REG 0x60
#define LEDS_SWITCH 0xED
#define BIT(n) (0x01<<n)
#define AUX		BIT(5)
#define OBF		BIT(0)
#define PAR_ERR		BIT(7)
#define TO_ERR		BIT(6)
#define IBF BIT(1)


#endif __KBC_H
