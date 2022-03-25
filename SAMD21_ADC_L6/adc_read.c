/*
 * adc.c
 *
 * Created: 25.03.2022 11:10:41
 *  Author: SOFTWARE
 */ 
#include <atmel_start.h>
#include "adc_read.h"

void adc_enable()
{
	
	adc_sync_enable_channel(&ADC_0,0);
}

int ADC_Read(ADC_ReadTypeDef_t * ADC_ReadTypeDef)
{
	adc_sync_read_channel(&ADC_0,0,ADC_ReadTypeDef->buffer,2);
	ADC_ReadTypeDef->PA06_ADC_value = (ADC_ReadTypeDef->buffer[1] << 8) + ADC_ReadTypeDef->buffer[0];
	return ADC_ReadTypeDef->PA06_ADC_value;
}