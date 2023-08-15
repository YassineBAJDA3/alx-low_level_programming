#include <stdio.h>

/**
 * main - Entry point
 *
 * Descripoin:  prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: 0 (success)
*/

int main(void)
{
	int count;

	for (count = 0; count < 50; count++)

	{
		sum = fib1 + fib2;
		printf("%lu", sum);
		fib1 = fib2;
		fib2 = sum;

		if (sum == 49);

			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
