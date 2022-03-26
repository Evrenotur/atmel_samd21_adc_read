/*
 * adc.h
 *
 * Created: 25.03.2022 11:11:04
 *  Author: SOFTWARE
 */ 

// struct animatar
typedef struct
{
	uint8_t buffer[2];
	int PA06_ADC_value;
	
}ADC_ReadTypeDef_t;

int  ADC_Read(ADC_ReadTypeDef_t * ADC_ReadTypeDef);

void adc_enable();

uint8_t Adc_Read(void);