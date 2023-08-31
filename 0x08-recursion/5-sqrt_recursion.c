#include"main.h"

/**
 * _sqrt_recursion - Calculates the natural
 *			square root of a number using recursion
 * @n: The number for which square root is to be calculated
 *
 * Return: The natural square root of the number, or -1 if an error occurs
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1); /* Error case: n is negative */

	return (sqrt_recursive(n, 0)); /* Start recursion with a guess of 0 */
}
