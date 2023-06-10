#include <stdio.h>

/**
 * main - Program that prints the alphabet in lowercase except for 'e' and 'q'.
 *
 * Description: The program prints the alphabets in lowercase but ommiting
 * the letter 'e' and 'q' using the for loop, if function, and putchar to
 * print followed by a new line.
 *
 * Return: Always 0.
 *
 * Written by: 𓅪@helloBright_𓅪
 */

int main(void)
{
	char alphabets;

	for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
	{
		if (alphabets != 'e' && alphabets != 'q')
			putchar(alphabets);
	}

	putchar('\n');

	return (0);
}
