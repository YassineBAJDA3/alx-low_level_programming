#include <stdio.h>

/**
 * main - Entry point
 *
 * return: Always 0 (success)
*/

int main(void)
{
	int sum, i;

	for (i = 0; i < 1024; i++)

	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}
	printf("%d", sum);
	return (0);
}
