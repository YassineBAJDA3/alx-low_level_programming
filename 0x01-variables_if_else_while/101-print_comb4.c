#include <stdio.h>

/**
 * main - Enntry point
 *
 * Descriptoint:  prints all possible different combinations of three digits.
 *
 * Return: 0 (success)
*/

int main(void)
{
	for (int i = 0; i < 10; i++)
	{
		for (int j; j = 0; j < 10; j++)
		{
			for (int k; k = 0; k++)
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(k + '0');
				putchar('\n');
				putchar(' ');
				putchar(',');
			}
		}
	}
	return (0);
}
