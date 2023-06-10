#include <stdio.h>
#include "main.h"

/**
* print_to_98 - prints all natural numbers from n to 98.
* @n: print from this number
*
* Description: The function prints from a number 'n' to 98 in the right order
* using the if_else function, for loop, and printf function from the stdLibrary
*
* Written by: George Bright <itsgeorgebright@gmail.com>
*/

void print_to_98(int n)
{
	int a;

	if (n <= 98)
	{
		for (a = n; a <= 98; a++)
		{
			printf("%d", a);
			if (a != 98)
				printf(", ");
		}
	}
	else if (n >= 98)
	{
		for (a = n; a >= 98; a--)
		{
			printf("%d", a);
			if (a != 98)
				printf(", ");
		}
	}
	printf("\n");
}
