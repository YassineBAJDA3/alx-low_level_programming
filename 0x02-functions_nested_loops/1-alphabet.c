#include "main.h"

/**
 * print_alphabet - utilizes the _putchar function to print
 *			 the alphabet, in lowercase, followed by a new line.
*/

void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')

	{
		_putchar(letter);
		letter++;
	}
}
