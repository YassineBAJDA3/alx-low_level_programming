#include"function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the opcodes of its own main function.
 * @argc: The number of command-line arguments.
 * @argv: An array of command-line argument strings.
 *
 * Return: 0 on success, 1 for incorrect
 *		argument count, 2 for negative byte count.
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc != 2)
	{
		fprintf(stderr, "Error\n");
		return (1);
	}
	int num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		fprintf(stderr, "Error\n");
		return (2);
	}
	void *main_address = main;

	for (i = 0; i < num_bytes; i++)
	{
		printf("%02x", *((unsigned char *)main_address + i));
	}
	printf("\n");
	return (0);
}
