#include <stdio.h>

/**
 * main - Program that prints all the numbers of base 16 in lowercase.
 *
 * Description: The program prints all numbers of base 16 in lowercase using
 * the for loop and putchar function.
 *
 * Return: Always 0.
 *
 * Written by: @helloBright_
 */

int main(void)
{
	int hex;

	for (hex = 0; hex < 16; hex++)
	{
		if (hex < 10)
		{
			putchar(hex + '0');
		}
		else
		{
			putchar(hex - 10 + 'a');
		}
	}
	putchar('\n');

	return (0);
}
