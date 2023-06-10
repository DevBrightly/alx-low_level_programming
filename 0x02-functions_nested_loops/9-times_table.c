#include "main.h"

/**
* times_table - prints the 9 times table, starting with 0
*
* Description: The function prints the 9 times table starting with 0 using the
* for loop and if_else function.
*
* Written by: George Bright <itsgeorgebright@gmail.com>
*/

void times_table(void)
{
	int a, b, c;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			c = a * b;
			if (b == 0)
			{
				_putchar(c + '0');
			}

			if (c <= 9 && b != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(c + '0');
			}
			else if (c > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((c / 10) + '0');
				_putchar((c % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
