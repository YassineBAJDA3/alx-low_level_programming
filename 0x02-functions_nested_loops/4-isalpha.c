#include "main.h"

/**
 *_isalpha - function that checks for alphabetic character
 *			 lowercase or uppercase
 * @c: takes input from other functions.
 *
 * Return: Returns 1 if c is a letter, lowercase or uppercase
 *		Returns 0 otherwise
*/

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	if (c >= 'A' && c <= 'Z')
		return (1);

	return (0);
}
