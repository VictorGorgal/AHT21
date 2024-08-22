#ifndef AHT21_H
#define AHT21_H

#include "pico/stdlib.h"
#include "hardware/i2c.h"

#define AHT21_ADDRESS 0x38
#define AHT21_INIT_COMMAND 0x71

void AHT21_init(i2c_inst_t *i2c_channel);
void AHT21_startMeasurement();
void AHT21_readMeasurement(float *data);
void AHT21_getMeasurementBlocking(float *data);
void AHT21_example();

#endif
