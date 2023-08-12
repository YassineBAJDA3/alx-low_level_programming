#include <stdio.h>

/**
 * main - Entry point
 *
 * Descriptoin:  prints all possible different combinations of two digits.
 *
 * Return: 0 (success)
*/

int main(void)
{
	int i = 0;

	while (i < 10)
	{

		int J = i + 1;
	while (j < 10)
		{
		putchar(i + '0');
		putchar(j + '0');
		if (i != 9 || j != 8)
		{
			putchar(',');
			putchar(' ');
		}
	j++;
	}
	i++;
	}
	return (0);
}
