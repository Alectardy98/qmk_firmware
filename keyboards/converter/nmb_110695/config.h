
#pragma once

#include "config_common.h"

#define VENDOR_ID         0xFEED
#define PRODUCT_ID        0x0695
#define DEVICE_VER        1
#define MANUFACTURER      QMK
#define PRODUCT           NMB 110695 keyboard converter
#define DESCRIPTION       NMB 110695 keyboard converter
                          
#define MATRIX_ROWS       16
#define MATRIX_COLS       16

#define SERIAL_UART_BAUD 9600
#define SERIAL_UART_DATA UDR1
#define SERIAL_UART_UBRR (F_CPU / (16UL * SERIAL_UART_BAUD) - 1)
#define SERIAL_UART_TXD_READY (UCSR1A & _BV(UDRE1))
#define SERIAL_UART_RXD_PRESENT (UCSR1A & _BV(RXC1))
#define SERIAL_UART_RXD_VECT    USART1_RX_vect
#define SERIAL_UART_INIT() do { \
  /* baud rate */ \
  UBRR1L = (uint8_t)SERIAL_UART_UBRR; \
  /* baud rate */ \
  UBRR1H = (uint16_t)SERIAL_UART_UBRR >> 8; \
  /* enable TX and RX with interrupt */ \
  UCSR1B = _BV(TXEN1) | _BV(RXEN1) | _BV(RXCIE1); \
  /* 8-bit data */ \
  UCSR1C = _BV(UCSZ11) | _BV(UCSZ10); \
} while(0)

// RESET on PD1
#define RESET_PIN PIND
#define RESET_PORT PORTD
#define RESET_DDR DDRD
#define RESET_MASK (1<<1)
