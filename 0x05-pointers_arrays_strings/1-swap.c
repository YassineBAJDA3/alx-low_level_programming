#include"main.h"

/**
 * swap_int - function that swaps the values of two integers.
 *
 * @a: input integer 1
 * @b: input integer 2
*/

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
