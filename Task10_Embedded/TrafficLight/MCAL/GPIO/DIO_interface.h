/*
 * program.c
 *
 *      Author: Shorouk
 *      layer:MCAL
 *
 */

#ifndef MCAL_GPIO_DIO_INTERFACE_H_
#define MCAL_GPIO_DIO_INTERFACE_H_
#include "../../LIB/STD_types.h"
#define DIO_OutputPinDirection 1
#define DIO_InputPinDirection 0

#define DIO_Output_high 1
#define DIO_Output_low 0

#define DIO_PortA 0
#define DIO_PortB 1
#define DIO_PortC 2
#define DIO_PortD 3

#define DIO_Pin0  0
#define DIO_Pin1  1
#define DIO_Pin2  2
#define DIO_Pin3  3
#define DIO_Pin4  4
#define DIO_Pin5  5
#define DIO_Pin6  6
#define DIO_Pin7  7


u8 GIO_SetPinDirection (u8 copy_u8PORTID , u8 copy_u8PINID , u8 copy_u8Direction);
u8 GIO_SetPinValue     (u8 copy_u8PORTID , u8 copy_u8PINID , u8 copy_u8Value);
//u8 GIO_GetPinValue     (u8 copy_u8PORTID , u8 copy_u8PINID );



#endif /* MCAL_GPIO_DIO_INTERFACE_H_ */

