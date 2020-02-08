#include <stdlib.h>
#include <stdio.h>

#include <shunyaInterfaces.h>
#include <functions.h>
#include <simple-mode.h>
#include <advance-mode.h>

//#include <pcf8591.h>

#define LO_NEG 31
#define LO_POS 29
#define SHUTDOWN 33

int main(void)
{
	//pinMode(LO_NEG, INPUT);
	//pinMode(LO_POS, INPUT);
	//pinMode(SHUTDOWN, OUTPUT);

	debugLogOn();
	initLib();

	struct pcf8591Settings set = {.def=1};
	//int16_t ecg_value = 0;
	//float temp = getCelsius();
	//printf("Val = %.2f \n", temp);
	int adc = getAdc(2);
	printf("Val = %d \n", adc);
	while() {
		//temp = getCelsius();
		//printf("Temperature = %.2f deg C \n", temp);
		printf("Val0 = %d \n", getAdc(0));
		printf("Val1 = %d \n", getAdc(1));
		printf("Val2 = %d \n", getAdc(2));
		printf("Val3 = %d \n", getAdc(3));
		/*if((digitalRead(LO_NEG) != HIGH) && (digitalRead(LO_POS) != HIGH)) {
		//	ecg_value = getAdc(2);
		//	printf("Sensor Reading: %d", ecg_value);
			printf("\tERROR::Leads are off\n");
		}*/
		/*printf("Ain0: %d", getAdc6(set, 0));
		  printf("Ain1: %d", getAdc6(set, 1));
		  printf("Ain2: %d", getAdc6(set, 2));
		  printf("Ain3: %d", getAdc6(set, 3));*/
		delay(10);
	}
	return 0;
}
