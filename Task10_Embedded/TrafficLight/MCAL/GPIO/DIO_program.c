/*
 * program.c
 *
 *      Author: Shorouk
 *      layer: MCAL
 *
 */
#include "../../LIB/STD_types.h"
#include "../../LIB/MATH.h"
#include "DIO_interface.h"
#include "DIO_private.h"
#include "DIO_config.h"

u8 GIO_SetPinDirection(u8 copy_u8PORTID, u8 copy_u8PINID, u8 copy_u8Direction) {
	u8 local_error_direction = 0;
	if ((copy_u8PORTID <= DIO_PortD) && (copy_u8PINID <= DIO_Pin7)
			&& ((copy_u8Direction == DIO_OutputPinDirection)
					|| (copy_u8Direction == DIO_InputPinDirection))) {
		switch (copy_u8PORTID) {
		case DIO_PortA:

			switch (copy_u8Direction) {
			case DIO_OutputPinDirection:
				SET_BIT(DDRA, copy_u8PINID);
				break;
			case DIO_InputPinDirection:
				CLR_BIT(DDRA, copy_u8PINID);
				break;
			}
			break;
		case DIO_PortB:
			switch (copy_u8Direction) {
			case DIO_OutputPinDirection:
				SET_BIT(DDRA, copy_u8PINID);
				break;
			case DIO_InputPinDirection:
				CLR_BIT(DDRA, copy_u8PINID);
				break;
			}
			break;
		case DIO_PortC:
			switch (copy_u8Direction) {
			case DIO_OutputPinDirection:
				SET_BIT(DDRA, copy_u8PINID);
				break;
			case DIO_InputPinDirection:
				CLR_BIT(DDRA, copy_u8PINID);
				break;
			}
			break;
		case DIO_PortD:
			switch (copy_u8Direction) {
			case DIO_OutputPinDirection:
				SET_BIT(DDRA, copy_u8PINID);
				break;
			case DIO_InputPinDirection:
				CLR_BIT(DDRA, copy_u8PINID);
				break;
			}
			break;
		}
		local_error_direction = 1;
	}
	return local_error_direction;
}

u8 GIO_SetPinValue(u8 copy_u8PORTID, u8 copy_u8PINID, u8 copy_u8Value) {
	u8 local_error_value = 0;
	if (copy_u8PORTID <= DIO_PortD && copy_u8PINID <= DIO_Pin7
			&& (copy_u8Value == DIO_Output_high
					|| copy_u8Value == DIO_Output_low)) {
		switch (copy_u8PORTID) {
		case DIO_PortA:
			switch (copy_u8Value) {
			case DIO_Output_high:
				SET_BIT(PORTA, copy_u8PINID);
				break;
			case DIO_Output_low:
				CLR_BIT(PORTA, copy_u8PINID);
				break;
			}
			break;
		case DIO_PortB:
			switch (copy_u8Value) {
			case DIO_Output_high:
				SET_BIT(PORTA, copy_u8PINID);
				break;
			case DIO_Output_low:
				CLR_BIT(PORTA, copy_u8PINID);
				break;
			}
			break;
		case DIO_PortC:
			switch (copy_u8Value) {
			case DIO_Output_high:
				SET_BIT(PORTA, copy_u8PINID);
				break;
			case DIO_Output_low:
				CLR_BIT(PORTA, copy_u8PINID);
				break;
			}
			break;
		case DIO_PortD:
			switch (copy_u8Value) {
			case DIO_Output_high:
				SET_BIT(PORTA, copy_u8PINID);
				break;
			case DIO_Output_low:
				CLR_BIT(PORTA, copy_u8PINID);
				break;
			}
			break;
		}
		local_error_value = 1;
	}
	return local_error_value;
}

