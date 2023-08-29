#include"main.h"

/**
 * _strpbrk - Locates the first occurrence in
 *                      a string of any of a set of bytes.
 * @haystack: The string to search.
 * @needle: The set of bytes to match against.
 *
 * Return: A pointer to the byte in 's' that
 *              matches one of the bytes in 'accept',
 *         or NULL if no such byte is found.
 */
char *_strpbrk(char *haystack, char *needle)
{
	int i;

	while (*haystack)
	{
		for (i = 0; needle[i]; i++)
		{
			if (*haystack == needle[i])
			{
				return (haystack);
			}
		}
		haystack++;
	}
	return (0);
}
