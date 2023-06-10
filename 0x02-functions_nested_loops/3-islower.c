#include "main.h"

/**
* _islower - checks for lowercase character.
*
* Description: The function checks if a character is lowercase or not, using
* if_else statement.
* @c: The character to be checked.
*
* Return: 1 if character is lowercase, else 0.
*
* Written by: George Bright <itsgeorgebright@gmail.com>
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
