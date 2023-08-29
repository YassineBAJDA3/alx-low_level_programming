#include "main.h"

/**
 * *_memset - fills memory with a constant byte.
 * @n: bytes of the memory area pointed
 * @b: the constant byte
 * @s: pointer
 *
 * return: pointer to the memory area s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
