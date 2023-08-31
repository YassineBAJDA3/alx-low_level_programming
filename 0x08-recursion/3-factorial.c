#include"main.h"

/**
 * factorial - Calculates the factorial of a given number
 * @n: The number for which factorial is to be calculated
 *
 * Return: The factorial of the number, or -1 if an error occurs
 */
int factorial(int n)
{
	if (n < 0)
		return (-1); /* Error case: n is lower than 0 */
	if (n == 0)
		return (1); /* Base case: factorial of 0 is 1 */
	return (n * factorial(n - 1)); /* Recursive calculation of factorial */
}
