#pragma once

#include <stdint.h>
#include "soc/gpio_num.h"

// =====================================================
// Elyssa Dev Board
// MCU: ESP32-S3FN8
// Flash: 8MB
// =====================================================

// -----------------------------------------------------
// Builtin LED
// -----------------------------------------------------

static const uint8_t LED_BUILTIN = 38;

// -----------------------------------------------------
// Default UART
// -----------------------------------------------------

static const uint8_t TX = 43;
static const uint8_t RX = 44;

// -----------------------------------------------------
// Primary I2C
// -----------------------------------------------------

static const uint8_t SDA = 8;
static const uint8_t SCL = 9;

// -----------------------------------------------------
// MPU6050 / Gyroscope I2C
// -----------------------------------------------------

static const uint8_t GYRO_SDA = 17;
static const uint8_t GYRO_SCL = 18;

// -----------------------------------------------------
// Primary SPI
// -----------------------------------------------------

static const uint8_t SS   = 34;
static const uint8_t MOSI = 35;
static const uint8_t MISO = 37;
static const uint8_t SCK  = 36;

// -----------------------------------------------------
// SD Card SPI
// -----------------------------------------------------

static const uint8_t SD_CS   = 10;
static const uint8_t SD_MOSI = 11;
static const uint8_t SD_SCK  = 12;
static const uint8_t SD_MISO = 13;

// -----------------------------------------------------
// GPIO aliases
// -----------------------------------------------------

static const uint8_t IO0 = 1;
static const uint8_t IO1 = 2;
static const uint8_t IO2 = 3;
static const uint8_t IO3 = 4;
static const uint8_t IO4 = 5;
static const uint8_t IO5 = 6;
static const uint8_t IO6 = 7;

// Exposed GPIOs

static const uint8_t GPIO8  = 8;
static const uint8_t GPIO9  = 9;
static const uint8_t GPIO10 = 10;
static const uint8_t GPIO11 = 11;
static const uint8_t GPIO12 = 12;
static const uint8_t GPIO13 = 13;

static const uint8_t GPIO14 = 14;
static const uint8_t GPIO15 = 15;
static const uint8_t GPIO16 = 16;
static const uint8_t GPIO17 = 17;
static const uint8_t GPIO18 = 18;

static const uint8_t GPIO34 = 34;
static const uint8_t GPIO35 = 35;
static const uint8_t GPIO36 = 36;
static const uint8_t GPIO37 = 37;
static const uint8_t GPIO38 = 38;

static const uint8_t GPIO43 = 43;
static const uint8_t GPIO44 = 44;

// -----------------------------------------------------
// Analog aliases
// -----------------------------------------------------

static const uint8_t A0 = 1;
static const uint8_t A1 = 2;
static const uint8_t A2 = 3;
static const uint8_t A3 = 4;
static const uint8_t A4 = 5;
static const uint8_t A5 = 6;
static const uint8_t A6 = 7;

static const uint8_t A7 = 8;
static const uint8_t A8 = 9;

// -----------------------------------------------------
// PWM capable pins
// ESP32-S3 LEDC supports PWM on nearly all outputs
// -----------------------------------------------------

static const uint8_t PWM0  = 1;
static const uint8_t PWM1  = 2;
static const uint8_t PWM2  = 3;
static const uint8_t PWM3  = 4;
static const uint8_t PWM4  = 5;
static const uint8_t PWM5  = 6;
static const uint8_t PWM6  = 7;

static const uint8_t PWM7  = 8;
static const uint8_t PWM8  = 9;

static const uint8_t PWM9  = 14;
static const uint8_t PWM10 = 15;
static const uint8_t PWM11 = 16;
static const uint8_t PWM12 = 17;
static const uint8_t PWM13 = 18;

static const uint8_t PWM14 = 34;
static const uint8_t PWM15 = 35;
static const uint8_t PWM16 = 36;
static const uint8_t PWM17 = 37;
static const uint8_t PWM18 = 38;

// -----------------------------------------------------
// SPI aliases
// -----------------------------------------------------

#define PIN_SPI_SS     SS
#define PIN_SPI_MOSI   MOSI
#define PIN_SPI_MISO   MISO
#define PIN_SPI_SCK    SCK

// -----------------------------------------------------
// Wire aliases
// -----------------------------------------------------

#define PIN_WIRE_SDA SDA
#define PIN_WIRE_SCL SCL

// -----------------------------------------------------
// Serial aliases
// -----------------------------------------------------

#define SERIAL_PORT_MONITOR Serial
#define SERIAL_PORT_USBVIRTUAL Serial

#define SERIAL_PORT_HARDWARE Serial1
#define SERIAL_PORT_HARDWARE_OPEN Serial1

// -----------------------------------------------------
// Board info
// -----------------------------------------------------

#define ARDUINO_ELYSSA

#define EXTERNAL_NUM_INTERRUPTS 48
#define NUM_DIGITAL_PINS 19
#define NUM_ANALOG_INPUTS 9
