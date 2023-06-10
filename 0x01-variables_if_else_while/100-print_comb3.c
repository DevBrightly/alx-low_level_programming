#include <stdio.h>

/**
 * main - Program that prints all possible different combinations of two digits
 *
 * Description: The program prints all possible different combinations of two
 * digits in ascending order without repetition of same numbers using the
 * for loop and putchar function.
 *
 * Return: Always 0.
 *
 * Written by: George Bright <itsgeorgebright@gmail.com>
 */

int main(void)
{
	int digit1, digit2;

	for (digit1 = 0; digit1 < 9; digit1++)
	{
		for (digit2 = digit1 + 1; digit2 < 10; digit2++)
		{
			putchar((digit1 % 10) + '0');
			putchar((digit2 % 10) + '0');

			if (digit1 == 8 && digit2 == 9)
				continue;

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
