#include <stdio.h>

/**
 * main - entry point
 *
 *Descriptoin:  prints all possible combinations of single-digit numbers
 *
 *Return: 0 (success)
*/

int main(void)
{
	int digit = 0;

	while (digit <= 9)

	{
		putchar(digit);
		if (digit != 9)
		{
			putchar(',');
			putchar(' ');
		}
		digit++;

	}
	putchar('\n');
	return (0);
}
