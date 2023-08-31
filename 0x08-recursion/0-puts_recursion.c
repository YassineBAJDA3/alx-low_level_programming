#include <stdio.h>
#include"main.h"

/**
 * _puts_recursion - Prints a string followed by a new line using recursion
 * @s: The string to be printed
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n'); /* Print a newline when the string ends */
	}

	putchar(*s); /* Print the current character */
	_puts_recursion(s + 1); /* Move to the next character and recurse */
}
