#include "main.h"

/**
 * _strspn - Calculates the length of the initial segment of a string
 *           consisting only of characters from a given set.
 * @s: The string to search.
 * @accept: The set of characters to match against.
 *
 * Return: The number of characters in the initial segment of 's'
 *         which are in the set 'accept'.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != s[i]; j++)
		{
			if (accept[j] == '\0')
				return  (i);
		}
	}
	return (i);
}
