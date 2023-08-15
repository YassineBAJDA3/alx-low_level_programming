#include "main.h"

/**
 * print_sign - prints + if n is greater than zero,
 *		0 if n is zero and - if n is less
 *		than zero
 *
 * @n: takes int pype input functoin
 *
 * Return: return 1 if +, return 0 if 0, return -1 if -
*/

int print_sign(int n)
{
	if (n > 0)

	{
		_putchar('45');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('48');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('45');
		return (-1);
