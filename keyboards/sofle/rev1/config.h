#pragma once

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFC32
#define PRODUCT_ID      0x0287
#define DEVICE_VER      0x0001
#define MANUFACTURER    JosefAdamcik
#define PRODUCT         Sofle
#define DESCRIPTION     Sofle is 6×4+5keys+encoder column-staggered split keyboard.

/* key matrix size */
// Rows are doubled-up
#define MATRIX_ROWS 10
#define MATRIX_COLS 6

// wiring of each half
#define MATRIX_ROW_PINS { C6, D7, E6, B4, B5 }
#define MATRIX_COL_PINS { F6, F7, B1, B3, B2, B6 }
#define DIODE_DIRECTION COL2ROW

#define TAPPING_TERM 100
#define DEBOUNCE 5

/* encoder support */
#define ENCODERS_PAD_A { F5 }
#define ENCODERS_PAD_B { F4 }
#define ENCODERS_PAD_A_RIGHT { F4 }
#define ENCODERS_PAD_B_RIGHT { F5 }
#define ENCODER_RESOLUTION 2

#define TAP_CODE_DELAY 10

/* communication between sides */
#define USE_SERIAL
#define SERIAL_USE_MULTI_TRANSACTION
#define SOFT_SERIAL_PIN D2

#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION

/* define RGB PIN */
// #define RGB_DI_PIN D3   	 	// elite-C use D3 pin for RGB
// #define RGBLED_NUM 12    		// Number of LEDs
// #define RGBLED_SPLIT { 8, 8 } 	// Number of LEDs on each side

/* must define COMBO keylist count here */
#define COMBO_COUNT 1
#define COMBO_TERM 300

/* ps2 trackpad config, using interrupt
    try to use D3 pin (original for RGB DI)
    and F4 pin (should be free to use)
    please refer to elite-C pin out: https://deskthority.net/wiki/Elite-C
*/
/*
#ifdef PS2_USE_INT
#define PS2_CLOCK_PORT  PORTD
#define PS2_CLOCK_PIN   PIND
#define PS2_CLOCK_DDR   DDRD
#define PS2_CLOCK_BIT   3
#define PS2_DATA_PORT   PORTF
#define PS2_DATA_PIN    PINF
#define PS2_DATA_DDR    DDRF
#define PS2_DATA_BIT    4

#define PS2_INT_INIT()  do {    \
    EICRA |= ((1<<ISC21) |      \
              (0<<ISC20));      \
} while (0)
#define PS2_INT_ON()  do {      \
    EIMSK |= (1<<INT2);         \
} while (0)
#define PS2_INT_OFF() do {      \
    EIMSK &= ~(1<<INT2);        \
} while (0)
#define PS2_INT_VECT   INT3_vect
#endif
*/
