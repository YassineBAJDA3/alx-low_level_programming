#include"main.h"

/**
 * _strstr - Finds the first occurrence of a substring in a string.
 * @haystack: The string to search within.
 * @needle: The substring to search for.
 *
 * Return: A pointer to the beginning of the located substring in 'haystack',
 *         or NULL if the substring is not found.
*/

char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *h = haystack;

		char *n = needle;

		while (*n && *h == *n)
		{
			h++;
			n++;
		}
		if (*n == '\0')
			return (haystack);
		haystack++;
	}
	return (0);
}
