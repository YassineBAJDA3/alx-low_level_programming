#include"main.h"

/*
 * print_alphabet_x10 - Function that will print the alphabet 10 times
 *
*/

void print_alphabet_x10(void);
{
int i = 0;
while (i <= 9)
{
char letter = 'a';

while (letter <= 'z')
{
	_putchar(letter);
	letter++;
}
_putchar('\n');
i++;
}
}
