#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 * @void: no args
 *
 * Return: 0 if successful
 */

int main(void)
{
	int n;
	int lastDigit;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	lastDigit = n % 10;

	if (lastDigit > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, lastDigit);

	if (lastDigit == 0)
		printf("Last digit of %d is 0 and is 0\n", n);

	if (lastDigit < 6 && lastDigit != 0)
	{
		int l = lastDigit;


		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, l);
	}

	return (0);
}
