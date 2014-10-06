#ifndef RASPBERRY_PI_H
#define RASPBERRY_PI_H

#define PIN1	"POWER33V" 	/* 3.3 volt */
#define PIN2	"POWER5V"	/* 5V */
#define PIN6	"GND"		/* GND */

#ifdef MODELB
#define PIN3	8		/* I2C_SDA0 */
#define PIN4	"DNC"		/* DO_NOT_CONNECT */
#define PIN5	9		/* I2C_SCL0 */
#define PIN6	"GND"		/* GND */
#define PIN7	7		/* GPIO7 */
#define PIN8	15		/* TXD */
#define PIN9	"DNC"		/* DO_NOT_CONNECT */
#define PIN10	16		/* RXD */
#define PIN11	0		/* GPIO 0 */
#define PIN12	1		/* GPIO 1 */
#define PIN13	2		/* GPIO 2 */
#define PIN14	"DNC"		/* DO_NOT_CONNECT */
#define PIN15	3		/* GPIO 3 */
#define PIN16	4		/* GPIO 4 */
#define PIN17	"DNC"		/* DO_NOT_CONNECT */
#define PIN18	5		/* GPIO 5 */
#define PIN19	12		/* MOSI */
#define PIN20	"DNC"		/* DO_NOT_CONNECT */
#define PIN21	13		/* MISO */
#define PIN22	6		/* GPIO 6 */
#define PIN23	14		/* SCLK */
#define PIN24	10		/* CE0 */
#define PIN25	"DNC"		/* DO_NOT_CONNECT */
#define PIN26	11		/* CE1 */
#endif

#ifdef MODELBPLUS
#define PIN3	2		/* I2C1_SDA */
#define PIN4	"POWER5V"	/* 5V */
#define PIN5	3		/* I2C1_SCL */
#define PIN7	4		/* GPIO4/GPCLK0 */
#define PIN8	14		/* GPIO14/UART_TXD */
#define PIN9	"GND"		/* GND */
#define PIN10	15		/* GPIO15/UART_RXD */
#define PIN11	17		/* GPIO17 */
#define PIN12	18		/* GPIO18 */
#define PIN13	27		/* GPIO27 */
#define PIN14	"GND"		/* GND */
#define PIN15	22		/* GPIO22 */
#define PIN16	23		/* GPIO23 */
#define PIN17	"POWER33V"	/* 3.3V */
#define PIN18	24		/* GPIO24 */
#define PIN19	10		/* GPIO10/SPI_MOSI */
#define PIN20	"GND"		/* GND */
#define PIN21	9		/* GPIO9/SPI_MISO */
#define PIN22	25		/* GPIO25 */
#define PIN23	11		/* GPIO11/SPI_SCLK */
#define PIN24	8		/* GPIO8/SPI_CE0 */
#define PIN25	"GND"		/* GND */
#define PIN26	7		/* GPIO7/SPI_CE1 */
#define PIN27	0		/* ID_SD */
#define PIN28	0		/* ID_SC */
#define PIN29	5		/* GPIO5 */
#define PIN30	"GND"		/* GND */
#define PIN31	6		/* GND */
#define PIN32	12		/* GND */
#define PIN33	13		/* GND */
#define PIN34	"GND"		/* GND */
#define PIN35	19		/* GND */
#define PIN36	16		/* GND */
#define PIN37 	26		/* GPIO26 */
#define PIN38 	20		/* GPIO20 */
#define PIN39	"GND"		/* GND */
#endif

/* Incorporate similar methods used in arduino programming. This helps to ensure
   moving between platforms, programming methods can remain the same
*/

// digitalWrite

// digitalRead

// analogWrite

// analogRead

#endif
