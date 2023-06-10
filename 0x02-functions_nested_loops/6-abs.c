#include "main.h"

/**
* _abs - computes the absolute value of an integer
* @n: the int to check
*
* Description: The function computes and returns the absolute value of an
* integer argument 'n'. There is no error return value.
*
* Return: the absolute value of int
*
* Written by: George Bright <itsgeorgebright@gmail.com>
*/

int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (-n);
}
