#include <stdio.h>

/**
 * main - entry point
 *
 *Descriptoin: prints the alphabet in lowercase and then in uppercase
 *
 *Return: 0 (success)
*/

int main(void)
{
	char alphabet = 'a';
	char ALPHABET = 'A';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}

	while (ALPHABET <= 'Z')
	{
		 putchar(ALPHABET);
		 ALPHABET++;
	}
	putchar('\n');

	return (0);
}
