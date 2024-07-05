/*
 * main.c
 *
 *      Author: Shorouk
 */
#define F_CPU 8000000UL
#include "../MCAL/GPIO/DIO_interface.h"

void delay(u16 time_ms) {
	u16 i, j;
	for (i = 0; i < time_ms; i++) {
		for (j = 0; j < F_CPU / 8000; j++) {
			__asm("NOP");
		}
	}
}

int main() {
	GIO_SetPinDirection(DIO_PortA, DIO_Pin0, DIO_OutputPinDirection);
	GIO_SetPinDirection(DIO_PortA, DIO_Pin1, DIO_OutputPinDirection);
	GIO_SetPinDirection(DIO_PortA, DIO_Pin2, DIO_OutputPinDirection);

	while (1) {

		GIO_SetPinValue(DIO_PortA, DIO_Pin2, DIO_Output_high);
		delay(5000);
		GIO_SetPinValue(DIO_PortA, DIO_Pin2, DIO_Output_low);
		GIO_SetPinValue(DIO_PortA, DIO_Pin1, DIO_Output_high);
		delay(2000);
		GIO_SetPinValue(DIO_PortA, DIO_Pin1, DIO_Output_low);
		GIO_SetPinValue(DIO_PortA, DIO_Pin0, DIO_Output_high);
		delay(5000);
		GIO_SetPinValue(DIO_PortA, DIO_Pin0, DIO_Output_low);

	}

	return 0;
}

