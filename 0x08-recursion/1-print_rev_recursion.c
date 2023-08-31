#include"main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - Prints a string in reverse using recursion
 * @s: The string to be printed in reverse
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return; /* Base case: reached the end of the string */
	}
	else
	{
	_print_rev_recursion(s + 1); /* Recurse to the end of the string */
	putchar(*s); /* Print the current character after the recursion */
	}
}
