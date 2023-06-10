#include "main.h"

/**
* jack_bauer - prints every minute of the day of Jack Bauer starting from 00:00
* to 23:59 :)
*
* Description: The function prints every minute of the day starting from 0:00
* up to 23:59 using the for loop.
*
* Written by: George Bright <itsgeorgebright@gmail.com>
*/

void jack_bauer(void)
{
	int hour, minute;

	for (hour = 0; hour < 24; hour++)
	{
		for (minute = 0; minute < 60; minute++)
		{
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar(':');
			_putchar((minute / 10) + '0');
			_putchar((minute % 10) + '0');
			_putchar('\n');
		}
	}
}
