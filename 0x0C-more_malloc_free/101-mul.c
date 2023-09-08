#include <stdio.h>
#include <stdlib.h>

/**
 * is_positive_integer - Check if a string is a positive integer.
 * @str: The string to check.
 *
 * Return: 1 if it's a positive integer, 0 otherwise.
 */
int is_positive_integer(char *str)
{
	if (str == NULL || *str == '\0')
		return (0);

	while (*str)
	{
		if (*str < '0' || *str > '9')
			return (0);
		str++;
	}
	return (1);
}

/**
 * multiply - Multiply two positive integers.
 * @num1: The first positive integer.
 * @num2: The second positive integer.
 *
 * Return: The product of num1 and num2.
 */
unsigned long int multiply(unsigned long int num1, unsigned long int num2)
{
	return (num1 * num2);
}

/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the command-line arguments.
 *
 * Return: 0 on success, 98 on error.
 */
int main(int argc, char *argv[])
{
	unsigned long int num1, num2;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	if (!is_positive_integer(argv[1]) || !is_positive_integer(argv[2]))
	{
		printf("Error\n");
		return (98);
	}
	num1 = strtoul(argv[1], NULL, 10);
	num2 = strtoul(argv[2], NULL, 10);

	printf("%lu\n", multiply(num1, num2));

	return (0);
}
