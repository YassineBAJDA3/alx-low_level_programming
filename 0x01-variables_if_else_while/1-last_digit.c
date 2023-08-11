#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Descripotin: The last digit
 *
 * Return: 0 (success)
*/

int main(void)
{
	int n, Lastdigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	digit = n % 10;
	if (digit > 5)
		printf("Last digit of %d and is greater than 5\n", digit, n);
	else if (digit == 0)
		printf("Last digit of %d and is 0\n", digit, n);
	else if (digit < 6 && digit != 0)
		printf("Last digit of %d and is less than 6 and not 0\n", digit, n);
	return (0);
}
