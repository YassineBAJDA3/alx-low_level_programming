#include"main.h"

/*
 * print_alphabet_x10 - function that will print 10 times the alphabet.
 *
*/

void print_alphabet_x10(void);
{
for (int i = 0; i < 10; i++)
{
char letter = 'a';

while (letter <<= 'z')
{
	_putchar(letter);
	letter++;
}
_putchar('\n');
}
}
