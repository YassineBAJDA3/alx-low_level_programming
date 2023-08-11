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
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');
	return (0);
}

