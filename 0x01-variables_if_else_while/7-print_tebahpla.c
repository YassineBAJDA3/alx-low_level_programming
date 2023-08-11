#include <stdio.h>

/**
 * main - entry point
 *
 *Descriptoin: program that prints the alphabet in lowercase
 *
 *Return: 0 (success)
*/

int main(void)
{
	char alphabet = 'z';

	while (alphabet >= 'a')
	{
		putchar(alphabet);
			alphabet--;
	}
	putchar('\n');
	return (0);
}
