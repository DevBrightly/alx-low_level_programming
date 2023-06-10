#include <stdio.h>

/**
 * main - Program that prints the lowercase alphabet in reverse.
 *
 * Description: The program prints the lowercase alphabet in reverse order
 * using the for loop and putchar function, and then prints a new line after.
 *
 * Return: 0.
 *
 * Written by: @helloBright_
 */

int main(void)
{
	char alphabets;

	for (alphabets = 'z'; alphabets >= 'a'; alphabets--)
		putchar(alphabets);

	putchar('\n');

	return (0);
}
