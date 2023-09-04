#include"main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 *
 * @s: input to print
*/

void print_rev(char *s)
{
	int length = 0;
	int i = length - 1;

	while (s[length] != '\0')
	{
		length++;
	}
	while (i >= 0)
	{
		printf("%c", s[i]);
		i--;
	}
	printf("\n");
}
