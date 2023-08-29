#include <stdio.h>
#include"main.h"

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix.
 * @a: The pointer to the square matrix.
 * @size: The size of the matrix.
*/

void print_diagsums(int *a, int size)
{
	int i;
	int sum_main_diag = 0;
	int sum_sec_diag = 0;

	for (i = 0; i < size; i++)
	{
		sum_main_diag += a[i * size + i];
		sum_sec_diag += a[i * size + (size - 1 - i)];
	}
	printf("%d, ", sum_main_diag);
	printf("%d\n", sum_sec_diag);
}
