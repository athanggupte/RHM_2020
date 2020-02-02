/**
****************************************************************************
* @file         example1.c
* @author       Yogesh Hegde
* @brief        This file provides the source code for interfacing the 
                alcohol sensor.

                                    #### How to use ####
============================================================================
(#) Connect the hardware as per the diagram and run the following code.
(#) Observe the terminal to see the changes in the switch state.
                                                                 
****************************************************************************
*/

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
               
	//struct pcf8591Settings set = {.def=1};
	//int16_t ecg_value = 0;
        float temp = getCelsius();
	//getAdc6(set, Ain0);
	while(1) {
		temp = getCelsius();
        	printf("Temperature = %.2f deg C \n", temp);
		/*if((digitalRead(LO_NEG) != HIGH) && (digitalRead(LO_POS) != HIGH)) {
			ecg_value = getAdc6(set, Ain0);
			printf("Sensor Reading: %d", ecg_value);
		}*/
		/*printf("Ain0: %d", getAdc6(set, 0));
		printf("Ain1: %d", getAdc6(set, 1));
		printf("Ain2: %d", getAdc6(set, 2));
		printf("Ain3: %d", getAdc6(set, 3));*/
		delay(1000);
	}
        return 0;
}
