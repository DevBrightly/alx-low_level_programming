#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 * followed by a new line using for loop.
 *
 * Written by: George Bright <itsgeorgebright@gmail.com>
 */

void print_alphabet_x10(void)
{
	char alphabets;
	int lines;

	for (lines = 0; lines < 10; lines++)
	{
		for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
			_putchar(alphabets);

		_putchar('\n');
	}
}
