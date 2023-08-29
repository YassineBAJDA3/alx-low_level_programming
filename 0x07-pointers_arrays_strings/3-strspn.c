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
	unsigned int count = 0;

	for (; *s; s++)
	{
		int match = 0;

		for (int i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				count++;
				match = 1;
				break;
			}
		}
		if (match == 0)
			break;
	}
	return (count);
}
