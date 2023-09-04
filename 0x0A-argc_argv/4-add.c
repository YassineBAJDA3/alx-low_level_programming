#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array containing the command-line arguments
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i, j;

	/* Check if the program received at least one argument */
	if (argc < 2)
	{
		printf("0\n");
		return (0); /* Return 0 for no arguments (success) */
	}

	/* Loop through the arguments starting from the second argument (index 1) */
	for (i = 1; i < argc; i++)
	{
		/* Check if the argument contains non-digit characters */
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1); /* Return 1 for invalid input (error) */
			}
		}

		/* Convert the argument to an integer and add it to the sum */
		sum += atoi(argv[i]);
	}

	/* Print the sum followed by a newline */
	printf("%d\n", sum);

	return (0); /* Return 0 for successful execution */
}
