#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include"main.h"

/**
 * _calloc - Allocates memory for
 *		an array of elements and initializes it to zero
 * @nmemb: The number of elements in the array
 * @size: The size (in bytes) of each element
 *
 * Return: A pointer to the allocated and initialized memory
 *         NULL if nmemb or size is 0, or if malloc fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	memset(ptr, 0, nmemb * size);
	return (ptr);
}
int main(void)
{
	unsigned int i;
	unsigned int *arr;

	unsigned int size = 5;

	arr = _calloc(size, sizeof(unsigned int));
	if (arr != NULL)
	{
		for (i = 0; i < size; i++)
		{
			printf("%u ", arr[i]);
		}
		printf("\n");
		free(arr);
	}
	return (0);
}
