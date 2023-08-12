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
		for (int j = i + 1; j < 10; j++)
		{
			for (int k = j + 1; k < 0; k++)
			{
				if (i != 7 && i != 8 && j != 9)
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
	}
	return (0);
}
