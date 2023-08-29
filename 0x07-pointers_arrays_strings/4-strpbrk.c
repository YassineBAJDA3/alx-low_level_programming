/**
 * _strpbrk - Locates the first occurrence in
 *			a string of any of a set of bytes.
 * @s: The string to search.
 * @accept: The set of bytes to match against.
 *
 * Return: A pointer to the byte in 's' that
 *		matches one of the bytes in 'accept',
 *         or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		for (int i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
