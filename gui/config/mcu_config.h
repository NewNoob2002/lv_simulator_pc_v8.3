#ifndef MCU_CONFIG_H
#define MCU_CONFIG_H

#include "mcu_define.h"

#define FIRMWARE_NAME "Radio_Panel"
#define SOFTWARE_VERSION "V1.0.1"
#define SOFTWARE_BUILD_DATE __DATE__
#define SOFTWARE_BUILD_TIME __TIME__
#define HARDWARE_VERSION "1.0"

/*
V1.0.1 适配电台协议和通道配置
*/
/*Function Key*/
#define FUNCTION_KEY_PIN PA15
/*power_control_pin*/
#define MCU_ON_OFF_BATTERY_PIN PB3
/*power_key_pin*/
#define POWER_KEY_PIN PA0

/*charger_control*/
#define CHARGER_ENABLE_PIN 		PA4
#define CHARGER_CTRL_PIN 			PB7
#define CHARGER_CTRL_FAST_PIN PB6
#define CHARGER_SWITCH_PIN 		PB10

#define CHARGER_ADC_DETECT_PIN PA1

#define USB_SWITCH_PIN PB8

/*watchdog_pin*/
#define WATCHDOG_PIN PA6

/*Status LED*/
#define POWER_LED_PIN PC13
#define CHARGE_LED_PIN PH2
#define FUNCTION_LED_PIN PB5

#endif