#include <stdio.h>

/**
 * before_main_execution - Prints the specified lines before main is executed.
*/
void before_main_execution(void)
{
	printf("You're beat! and yet, you must allow\n");
	printf("I bore my house upon my back!\n");
}

/**
 * main - The main function.
 *
 * Return: Always 0.
*/

int main(void)
{
	before_main_execution();
	printf("Main function is executed.\n");
	return (0);
}
