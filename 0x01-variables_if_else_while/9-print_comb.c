#include <stdio.h>

/**
 * main - Program that prints all possible combinations of single-digit numbers
 *
 * Description: The program prints all possible combinations of single digit
 * numbers separated by "," and a space in ascending order using the for loop
 * and putchar function.
 *
 * Return: 0.
 *
 * Written by: George Bright <itsgeorgebright@gmail.com>
 */

int main(void)
{
	int singleNum;

	for (singleNum = 0; singleNum <= 9; singleNum++)
	{
		putchar((singleNum % 10) + '0');
		if (singleNum == 9)
			continue;

		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
