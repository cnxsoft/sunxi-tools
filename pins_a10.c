/*
 * Copyright (C) 2012  Alejandro Mery <amery@geeks.cl>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "pins.h"

static const char *port_a[][6] = {
	{"ERXD3",  "SPI1_CS0",	"UART2_RTS"},	/* PA0 */
	{"ERXD2",  "SPI1_CLK",	"UART2_CTS"},	/* PA1 */
	{"ERXD1",  "SPI1_MOSI",	"UART2_TX"},	/* PA2 */
	{"ERXD0",  "SPI1_MOSO",	"UART2_RX"},	/* PA3 */
	{"ETXD3",  "SPI1_CS1"},			/* PA4 */
	{"ETXD2",  "SPI3_CS0"},			/* PA5 */
	{"ETXD1",  "SPI3_CLK"},			/* PA6 */
	{"ETXD0",  "SPI3_MOSI"},		/* PA7 */
	{"ERXCK",  "SPI3_MOSO"},		/* PA8 */
	{"ERXERR", "SPI3_CS1"},			/* PA9 */
	{"ERXDV",   NULL,	"UART1_TX"},	/* PA10 */
	{"ERXDV",   NULL,	"UART1_RX"},	/* PA11 */
	{"EMDIO",  "UART6_TX",	"UART1_RTS"},	/* PA12 */
	{"ETXEN",  "UART6_RX",	"UART1_CTS"},	/* PA13 */
	{"ETXCK",  "UART7_TX",	"UART1_DTR"},	/* PA14 */
	{"ECRS",   "UART7_RX",	"UART1_DSR"},	/* PA15 */
	{"ECOL",   "CAN_TX",	"UART1_DCD"},	/* PA16 */
	{"ETXERR", "CAN_RX",	"UART1_RING"},	/* PA17 */
};

static const char *port_b[][6] = {
	{"TWI0_SCK"},				/* PB0 */
	{"TWI0_SDA"},				/* PB1 */
	{"PWM0"},				/* PB2 */
	{"IR0_TX",     NULL,	 "NC"},		/* PB3 */
	{"IR0_RX"},				/* PB4 */
	{"I2S_MCLK",  "AC97_MCLK"},		/* PB5 */
	{"I2S_BCLK",  "AC97_BCLK"},		/* PB6 */
	{"I2S_LRCK",  "AC97_SYNC"},		/* PB7 */
	{"I2S_DO0",   "AC97_DO"},		/* PB8 */
	{"I2S_DO1"},				/* PB9 */
	{"I2S_DO2"},				/* PB10 */
	{"I2S_DO3"},				/* PB11 */
	{"I2S_DI",    "AC97_DI", "NC"},		/* PB12 */
	{"SPI2_CS1",   NULL,	 "NC"},		/* PB13 */
	{"SPI2_CS0",  "JTAG_MS0"},		/* PB14 */
	{"SPI2_CLK",  "JTAG_CK0"},		/* PB15 */
	{"SPI2_MOSI", "JTAG_DO0"},		/* PB16 */
	{"SPI2_MISO", "JTAG_DI0"},		/* PB17 */
	{"TWI1_SCK"},				/* PB18 */
	{"TWI1_SDA"},				/* PB19 */
	{"TWI2_SCK"},				/* PB20 */
	{"TWI2_SDA"},				/* PB21 */
	{"UART0_TX", "IR1_TX"},			/* PB22 */
	{"UART0_RX", "IR1_RX"},			/* PB23 */
};

static const char *port_c[][6] = {
	{"NWE#", "SPI0_MOSI"},			/* PC0 */
	{"NALE", "SPI0_MISO"},			/* PC1 */
	{"NCLE", "SPI0_CLK"},			/* PC2 */
	{"NCE1"},				/* PC3 */
	{"NCE0"},				/* PC4 */
	{"NRE#"},				/* PC5 */
	{"NRB0", "SDC2_CMD"},			/* PC6 */
	{"NRB1", "SDC2_CLK"},			/* PC7 */
	{"NDQ0", "SDC2_D0"},			/* PC8 */
	{"NDQ1", "SDC2_D1"},			/* PC9 */
	{"NDQ2", "SDC2_D2"},			/* PC10 */
	{"NDQ3", "SDC2_D3"},			/* PC11 */
	{"NDQ4"},				/* PC12 */
	{"NDQ5"},				/* PC13 */
	{"NDQ6"},				/* PC14 */
	{"NDQ7"},				/* PC15 */
	{"NWP"},				/* PC16 */
	{"NCE2"},				/* PC17 */
	{"NCE3"},				/* PC18 */
	{"NCE4", "SPI2_CS0"},			/* PC19 */
	{"NCE5", "SPI2_CLK"},			/* PC20 */
	{"NCE6", "SPI2_MOSI"},			/* PC21 */
	{"NCE7", "SPI2_MISO"},			/* PC22 */
	{"SPI0_CS0"},				/* PC23 */
};

static struct ports a10_ports[] = {
	{ARRAY_SIZE(port_a), port_a},
	{ARRAY_SIZE(port_b), port_b},
	{ARRAY_SIZE(port_c), port_c},
};

void register_a10(void)
{
	register_pins("a10", a10_ports, ARRAY_SIZE(a10_ports));
}