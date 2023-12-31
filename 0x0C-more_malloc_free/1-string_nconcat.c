#include"main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - Concatenates two strings up to n bytes of s2.
 * @s1: The first string to concatenate.
 * @s2: The second string to concatenate, up to n bytes.
 * @n: The maximum number of bytes from s2 to concatenate.
 *
 * Return: A pointer to the newly allocated concatenated string.
 *         If memory allocation fails or n is greater than s2's length,
 *         return NULL.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0;
	unsigned int i, j;

	char *concatenated;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;
	if (n >= len2)
		n = len2;
	concatenated = malloc(sizeof(char) * (len1 + n + 1));
	if (concatenated == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		concatenated[i] = s1[i];
	for (j = 0; j < n; j++)
		concatenated[i + j] = s2[j];
	concatenated[i + j] = '\0';
	return (concatenated);

}
