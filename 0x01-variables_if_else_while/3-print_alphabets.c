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
	char alphabet;
	char ALPHABET;
	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)


	putchar("%c", alphabet);

	for (ALPHABET = 'A'; ALPHABET <= 'Z'; ALPHABET++)

	putchar("%c", ALPHABET);
	putchar('\n');
	return (0);
}
