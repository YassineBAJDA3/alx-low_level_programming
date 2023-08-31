#include"main.h"
#include <stdio.h>

int check_palindrome(char *s, int start, int end);
int is_palindrome(char *s);

/**
 * is_palindrome - Checks if a string is a palindrome using recursion
 * @s: The string to be checked
 *
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int length = 0;

	while (s[length] != '\0')
		length++;

	return (check_palindrome(s, 0, length - 1));
}

/**
 * check_palindrome - Helper function
 *		to check for palindrome recursively
 * @s: The string to be checked
 * @start: The starting index
 * @end: The ending index
 *
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int check_palindrome(char *s, int start, int end)
{
	if (start >= end)
		return (1); /* All characters checked, so it's a palindrome */

	if (s[start] != s[end])
		return (0); /* Mismatch, not a palindrome */

	return (check_palindrome(s, start + 1, end - 1));
}
