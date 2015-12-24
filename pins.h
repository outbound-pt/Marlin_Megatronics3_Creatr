/**
 * MegaTronics v3.0 pin assignments
 */

#ifndef __AVR_ATmega2560__
  #error Oops!  Make sure you have 'Arduino Mega' selected from the 'Tools -> Boards' menu.
#endif

#define LARGE_FLASH        true

// Servo support
#ifdef NUM_SERVOS
  #define SERVO0_PIN       46 //AUX3-6
  #if NUM_SERVOS > 1
    #define SERVO1_PIN     47 //AUX3-5
    #if NUM_SERVOS > 2
      #define SERVO2_PIN   48 //AUX3-4
      #if NUM_SERVOS > 3
        #define SERVO2_PIN 49 //AUX3-3
      #endif
    #endif
  #endif
#endif

#define X_STEP_PIN         58
#define X_DIR_PIN          57
#define X_ENABLE_PIN       59
#define X_MIN_PIN          37
#define X_MAX_PIN          40   //2 //Max endstops default to disabled
//"-1", set to commented value to enable.

#define Z_STEP_PIN         5 // A6
#define Z_DIR_PIN          17 // A0
#define Z_ENABLE_PIN       4
#define Y_MIN_PIN          41
#define Y_MAX_PIN          38   //15

#define Y_STEP_PIN         16 // A2
#define Y_DIR_PIN          11 // A6
#define Y_ENABLE_PIN       3 // A1
#define Z_MIN_PIN          18
#define Z_MAX_PIN          19

#define E0_STEP_PIN        28
#define E0_DIR_PIN         27
#define E0_ENABLE_PIN      29

#define E1_STEP_PIN        25
#define E1_DIR_PIN         24
#define E1_ENABLE_PIN      26

#define E2_STEP_PIN        22
#define E2_DIR_PIN         60
#define E2_ENABLE_PIN      23

#define SDPOWER -1
#define SDSS 53
#define LED_PIN 13

#define PS_ON_PIN 12
#define KILL_PIN -1

#define HEATER_0_PIN 2
#define HEATER_1_PIN 9
#define HEATER_2_PIN 8
#define HEATER_BED_PIN 10
#define FAN_PIN 6
#define FAN2_PIN 7

#define TEMP_0_PIN   (TEMP_SENSOR_0 == -1 ?  11 : 15) // ANALOG NUMBERING
#define TEMP_1_PIN   (TEMP_SENSOR_1 == -1 ?  10 : 13) // ANALOG NUMBERING
#define TEMP_2_PIN   (TEMP_SENSOR_2 == -1 ?   9 : 12) // ANALOG NUMBERING
#define TEMP_BED_PIN (TEMP_SENSOR_BED == -1 ? 8 : 14) // ANALOG NUMBERING

#define BEEPER 61

#define LCD_PINS_RS 32
#define LCD_PINS_ENABLE 31
#define LCD_PINS_D4 14
#define LCD_PINS_D5 30
#define LCD_PINS_D6 39
#define LCD_PINS_D7 15

#define SHIFT_CLK 43
#define SHIFT_LD 35
#define SHIFT_OUT 34
#define SHIFT_EN 44

// Buttons are directly attached using keypad
#define BTN_EN1 44
#define BTN_EN2 45
#define BTN_ENC 33 // the click

#define BLEN_C 2
#define BLEN_B 1
#define BLEN_A 0

#define SDCARDDETECT -1	// Megatronics does not use this port

#define _E0_PINS E0_STEP_PIN, E0_DIR_PIN, E0_ENABLE_PIN, HEATER_0_PIN, 
#if EXTRUDERS > 1
  #define _E1_PINS E1_STEP_PIN, E1_DIR_PIN, E1_ENABLE_PIN, HEATER_1_PIN,
#else
  #define _E1_PINS
#endif
#if EXTRUDERS > 2
  #define _E2_PINS E2_STEP_PIN, E2_DIR_PIN, E2_ENABLE_PIN, HEATER_2_PIN,
#else
  #define _E2_PINS
#endif

#ifdef DISABLE_MAX_ENDSTOPS
#define X_MAX_PIN          -1
#define Y_MAX_PIN          -1
#define Z_MAX_PIN          -1
#endif

//Added this section to define SENSITIVE_PINS - Copied from Leapfrog Creatr Firmware "pins.h" file
//---------------------------------------------------------------------------------------
#define SENSITIVE_PINS {0, 1, X_STEP_PIN, X_DIR_PIN, X_ENABLE_PIN, X_MIN_PIN, X_MAX_PIN, Y_STEP_PIN, Y_DIR_PIN, Y_ENABLE_PIN, Y_MIN_PIN, Y_MAX_PIN, Z_STEP_PIN, Z_DIR_PIN, Z_ENABLE_PIN, Z_MIN_PIN, Z_MAX_PIN, LED_PIN, PS_ON_PIN, \
                        HEATER_BED_PIN, FAN_PIN,                  \
                        _E0_PINS _E1_PINS _E2_PINS             \
                        TEMP_0_PIN, TEMP_1_PIN, TEMP_2_PIN, TEMP_BED_PIN }

