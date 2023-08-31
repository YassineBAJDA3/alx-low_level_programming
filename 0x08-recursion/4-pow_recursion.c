#include"main.h"

/**
 * _pow_recursion - Calculates the value of x
 *			raised to the power of y using recursion
 * @x: The base number
 * @y: The exponent
 *
 * Return: The result of x raised to the power of y, or -1 if an error occurs
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1); /* Error case: y is lower than 0 */

	if (y == 0)
		return (1); /* Base case: x raised to the power of 0 is 1 */

	return (x * _pow_recursion(x, y - 1)); /* Recursive calculation of power */
}
