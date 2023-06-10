#include "main.h"

/**
* print_sign - prints the sign of a number
* @n: variable type int
*
* Description: The function prints +, 0, or - when 'n' is greater, equals, or
* less than 0 using putchar function.
*
* Return: 1 and prints + if n is greater than zero
* 0 and prints 0 if n is zero
* -1 and prints - if n is less than zero
*
*  Written by: George Bright <itsgeorgebright@gmail.com>
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
	}
	return (-1);
}
