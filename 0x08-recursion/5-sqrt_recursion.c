#include"main.h"
#include <stdio.h>
/**
 * _sqrt_recursion - Calculates the natural
 *			square root of a number using recursion
 * @n: The number for which square root is to be calculated
 *
 * Return: The natural square root of the number, or -1 if an error occurs
 */
int sqrt_recursive(int n, int guess);
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1); /* Error case: n is negative */

	return (sqrt_recursive(n, 0)); /* Start recursion with a guess of 0 */
}

/**
 * sqrt_recursive - Helper function for recursive calculation of square root
 * @n: The number for which square root is to be calculated
 * @guess: The current guess for the square root
 *
 * Return: The natural square root of the number, or -1 if not found
 */
int sqrt_recursive(int n, int guess)
{
	if (guess * guess == n)

		return (guess); /* Found the exact square root */

	if (guess * guess > n)
		return (-1); /* No natural square root for n */

	return (sqrt_recursive(n, guess + 1)); /* Increment the guess and recurse */
}
