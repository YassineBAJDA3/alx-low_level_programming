#include"main.h"

/**
 * _strlen - returns the length of a string.
 *
 * @s: string input
*/

int _strlen(char *s)
{
	int length;

	for (length = 0; *s != '\0'; s++)
		length++;
	return (length);
}
