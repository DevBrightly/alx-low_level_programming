#include <stdio.h>

/**
 * main - Program that prints the alphabets in lowercase
 *
 * Description: The program prints the alphabets in lowercase using the
 * for loop and putchar function.
 *
 * Return: 0
 *
 * Written by: 𓅪@helloBright_𓅪
 */

int main(void)
{
	char alphabets;

	for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
		putchar(alphabets);

	putchar('\n');

	return (0);
}
