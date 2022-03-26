#include <atmel_start.h>
#include "adc_read.h"
int main(void)
{
	int ret=0;
	/* Initializes MCU, drivers and middleware */
	atmel_start_init();
	
	uint16_t PA06_ADC_value;
	/* Replace with your application code */
	adc_enable();

	while (1) 
	{
	    ADC_ReadTypeDef_t adc_read;
		ret=ADC_Read(&adc_read);
	  if(ret==0)
	  {
		  printf("PA006=%03d\r\n",adc_read.buffer[1]);
	  }
	  else
	  {
		    printf("ADC Okuma Basar?s?z");
	  }
		
		delay_ms(250);
	}
}
