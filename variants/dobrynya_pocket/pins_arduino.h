#pragma once

#ifndef Pins_Arduino_h
#define Pins_Arduino_h

#define USB_VID            0x16c0
#define USB_PID            0x05e5
#define USB_MANUFACTURER   "mididobrynya.com"
#define USB_PRODUCT        "MIDI Dobrynya Pocket"
#define USB_SERIAL         "" // Empty string for MAC adddress

// #define EXTERNAL_NUM_INTERRUPTS 46
// #define NUM_DIGITAL_PINS        48
// #define NUM_ANALOG_INPUTS       20

// #define analogInputToDigitalPin(p)  (((p)<20)?(analogChannelToDigitalPin(p)):-1)
// #define digitalPinToInterrupt(p)    (((p)<48)?(p):-1)
// #define digitalPinHasPWM(p)         (p < 46)

// #define LED_BUILTIN         13

#define PIN_NEOPIXEL        33
#define NEOPIXEL_NUM        1     // number of neopixels
#define NEOPIXEL_POWER      21    // power pin
#define NEOPIXEL_POWER_ON   HIGH  // power pin state when on
#define I2C_POWER           7     // I2C power pin
#define PIN_I2C_POWER       7     // I2C power pin


#define TX  255
#define RX  255
#define TX1 TX
#define RX1 RX

#define SDA 2
#define SCL 38

#define SS    42
#define MOSI  35
#define SCK   36
#define MISO  37

// static inline constexpr uint8_t A0 = 18;
// static inline constexpr uint8_t A1 = 17;
// static inline constexpr uint8_t A2 = 16;
// static inline constexpr uint8_t A3 = 15;
// static inline constexpr uint8_t A4 = 14;
// static inline constexpr uint8_t A5 = 8;
// static inline constexpr uint8_t A6 = 3;
// static inline constexpr uint8_t A7 = 4;
// static inline constexpr uint8_t A8 = 5;
// static inline constexpr uint8_t A9 = 6;
// static inline constexpr uint8_t A10 = 9;
// static inline constexpr uint8_t A11 = 10;
// static inline constexpr uint8_t A12 = 11;
// static inline constexpr uint8_t A13 = 12;
// static inline constexpr uint8_t A14 = 13;

// static inline constexpr uint8_t T3 = 3;
// static inline constexpr uint8_t T4 = 4;
// static inline constexpr uint8_t T5 = 5;
// static inline constexpr uint8_t T6 = 6;
// static inline constexpr uint8_t T8 = 8;
// static inline constexpr uint8_t T9 = 9;
// static inline constexpr uint8_t T10 = 10;
// static inline constexpr uint8_t T11 = 11;
// static inline constexpr uint8_t T12 = 12;
// static inline constexpr uint8_t T13 = 13;
// static inline constexpr uint8_t T14 = 14;

// #include "USBCDC.h"
// extern USBCDC Serial;

#endif /* Pins_Arduino_h */
