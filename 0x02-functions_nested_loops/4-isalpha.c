#include "main.h"

/**
* _isalpha - checks if character is an alphabetic character.
* @c: The character to be checked.
*
* Return: 1 if character is a letter, else 0.
*
* Written by: George Bright <itsgeorgebright@gmail.com>
*/

int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
