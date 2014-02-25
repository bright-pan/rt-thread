/*********************************************************************
 * Filename:      gpio_adc.h
 * 
 * Description:    
 *
 * Author:        Bright Pan <loststriker@gmail.com>
 * Created at:    2013-04-27
 *                
 * Change Log:
 *
 * Copyright (C) 2013 Yuettak Co.,Ltd
 ********************************************************************/

#ifndef _GPIO_ADC_H_
#define _GPIO_ADC_H_

#include <rthw.h>
#include <rtthread.h>
#include <stm32f10x.h>
#include "gpio.h"


#define RT_DEVICE_CTRL_ENABLE_CONVERT    0x14    /* enable adc convert */
#define RT_DEVICE_CTRL_DISABLE_CONVERT   0x15    /* disable adc convert */
#define RT_DEVICE_CTRL_GET_CONVERT_VALUE 0x16    /* get adc converted value */

#define DEVICE_NAME_ADC_BATTERY "ad_bat" /* BATTERY DEVICE NAME */
#define DEVICE_NAME_ADC_NTC1 "ad_ntc1" /* BATTERY DEVICE NAME */
#define DEVICE_NAME_ADC_NTC2 "ad_ntc2" /* BATTERY DEVICE NAME */

void bat_enable(void);
void bat_disable(void);
uint16_t bat_get_value(void);

#endif
