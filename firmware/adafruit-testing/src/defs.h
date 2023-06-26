#pragma once

#define min(a,b) ({ __typeof__ (a) _a = (a); __typeof__ (b) _b = (b); _a < _b ? _a : _b; })

#define SENSOR_ADDR					0b1001010U
#define BAUD_RATE_HZ				400000 // Fast mode 400 kb/s
#define REPORT_SIZE					255
#define I2C_INST						i2c0
#define MAX_PAYLOAD_SIZE		1024
#define MAX_ATTEMPTS				5

#define SDA_PIN							16
#define SCL_PIN							17
#define INTN_PIN						18
