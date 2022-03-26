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
	int ret = adc_sync_read_channel(&ADC_0,0,ADC_ReadTypeDef->buffer,2);
	if(ret <= 0) { //Bu fonksiyon kaç byte okunduysa onu döndörüyor. Definition'?na bak?p inceleyebilirsin. Bu de?er 0 ya da daha küçükse fail kabul edece?iz.
		printf(" READ ERR");
		return -1; // Return FAIL
	}
      
 
	
	return 0;
}


uint8_t Adc_Read(void)
{
	uint8_t data;
	adc_sync_read_channel(&ADC_0,0,&data,1);
	
	return data;
}