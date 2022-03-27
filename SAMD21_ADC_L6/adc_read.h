/*
 * adc.h
 *
 * Created: 25.03.2022 11:11:04
 *  Author: SOFTWARE
 */ 


typedef struct
{
	uint8_t buffer[2];
	int16_t PA06_ADC_value;
	uint32_t sum;
	
}ADC_ReadTypeDef_t;

int  ADC_Read(ADC_ReadTypeDef_t * ADC_ReadTypeDef);

void adc_enable();
