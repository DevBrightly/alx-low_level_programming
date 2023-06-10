#include <stdio.h>

/**
 * main - Program that prints the alphabets in lowercase and then in uppercase.
 *
 * Description: The Program will print the alphabet first in lowercase and then
 * in uppercase using the for loop and putchar function.
 *
 * Return: Always 0.
 *
 * Written by: 𓅪@helloBright_𓅪
 */

int main(void)
{
	char alphabets;

	for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
		putchar(alphabets);

	for (alphabets = 'A'; alphabets <= 'Z'; alphabets++)
		putchar(alphabets);

	putchar('\n');

	return (0);
}
