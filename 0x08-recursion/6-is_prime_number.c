#include"main.h"

/**
 * is_prime_number - Checks if a number is prime using recursion
 * @n: The number to be checked
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0); /* 0 and 1 are not prime */

	return (check_prime(n, 2)); /* Start checking from divisor 2 */
}
/**
 * check_prime - Helper function to check for prime recursively
 * @n: The number to be checked
 * @divisor: The current divisor being checked
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int check_prime(int n, int divisor)
{
	if (divisor >= n)
		return (1); /* Checked up to n - 1, so n is prime */

	if (n % divisor == 0)
		return (0); /* n is divisible by divisor, not prime */

	return (check_prime(n, divisor + 1)); /* Check the next divisor */
}
