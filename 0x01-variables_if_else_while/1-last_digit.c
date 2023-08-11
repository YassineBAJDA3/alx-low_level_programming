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
	Lastdigit = n % 10;
	if (Lastdigit > 5)
		printf("Last digit of %d and is greater than 5\n", Lastdigit, n);
	else if (Lastdigit == 0)
		printf("Last digit of %d and is 0\n", Lastdigit, n);
	else if (Lastdigit < 6 && Lastdigit != 0)
		printf("Last digit of %d and is less than 6 and not 0\n", Lastdigit, n);
	return (0);
}
