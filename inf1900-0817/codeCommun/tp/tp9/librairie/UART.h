#define F_CPU 8000000UL
#include <avr/io.h>
#include <util/delay.h>

#ifndef UART_H
#define UART_H

void initialisationUART(void);
void transmissionUART(uint8_t donnee);
void traductionUART(char* message);
void traductionUART(char message);
uint8_t receptionUART();

#endif