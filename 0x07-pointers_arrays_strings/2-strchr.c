#include"main.h"

/**
 * *_strchr - fills memory with constant byte
 * @s: pointer to put the constant
 * @c: constant
 * return: pointer to s
*/

char *_strchr(char *s, char c)

{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}
