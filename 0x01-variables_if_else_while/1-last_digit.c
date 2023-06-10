#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - A program that assigns a random number to variable and prints
 * the last digit of that number.
 *
 * Description: The program assigns a random number to the variable `n`
 * every time it is being executed. It then prints the last digit of the random
 * number stored in the variable `n`.
 *
 * Return: 0
 *
 * Written by @georgebrighthub.
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if ((n % 10) > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n",
				n, n % 10);
	}
	else if ((n % 10) < 6 && (n % 10) != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n",
				n, n % 10);
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n",
				n, n % 10);
	}

	return (0);
}
