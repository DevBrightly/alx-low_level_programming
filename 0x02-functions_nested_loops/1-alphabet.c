#include "main.h"

/**
* print_alphabet - Print all alphabets in lowercase
*
* Written by: George Bright <itsgeorgebright@gmail.com>
*/

void print_alphabet(void)
{
	char alphabets;

	for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
		_putchar(alphabets);
	_putchar('\n');
}
