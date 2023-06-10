#include <stdio.h>

/**
 * main - Program that prints all single digit numbers of base 10 starting
 * from 0, using putchar function and without char variable type.
 *
 * Return: Always 0.
 *
 * Written by: @helloBright_
 */

int main(void)
{
	int singleNum;

	for (singleNum = 0; singleNum < 10; singleNum++)
		putchar((singleNum % 10) + '0');

	putchar('\n');

	return (0);
}
