#include <stdio.h>

/**
 * main - Program that prints all single digit numbers of base 10
 * starting from 0.
 *
 * Description: The program prints all single digits in base 10 starting
 * from 0 using the for loop and printf function followed by a new line.
 *
 * Return: Always 0.
 *
 * Written by: 𓅪@helloBright_
 */

int main(void)
{
	int singleNum;

	for (singleNum = 0; singleNum < 10; singleNum++)
		printf("%d", singleNum);

	printf("\n");

	return (0);
}
