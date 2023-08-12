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
	for (int i = 0; i < 10; i++)
	{
		for (int j = i + 1; j < 10; j++)
		{
			putchar(i + '0')
			putchar(j + '0')
			if (i != 9 || j != 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	return (0);
}
