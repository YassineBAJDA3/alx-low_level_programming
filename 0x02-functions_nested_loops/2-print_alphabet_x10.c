#include"main.h"

/*
 * print_alphabet_x10 - function that will print 10 times the alphabet
 *
*/

void print_alphabet_x10(void)
{
	for (int i = 0; i < 10; i++)
	{
		for (int letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
			_putchar('\n');
		}
	}
}
