#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * descripoin: the numbers from 1 to 100,
 *		followed by a new line. But
 *		for multiples of three print Fizz instead
 *		of the number and for the multiples of five print Buzz
 *
 * Rturn: Always 0.
*/

int main(void)

{

	int num;

	for (num = 0; num <= 100; num++)
	{
		if (num % 3 == 0)
			printf("Fizz ");
		else if (num % 5 == 0)
			printf("Buzz ");
		else if (num % 3 == 0 && num % 5 == 0)
			printf("FizzBuzz ");
		else
			printf("%d ", num);
	}
	printf("\n");
	return (0);
}
