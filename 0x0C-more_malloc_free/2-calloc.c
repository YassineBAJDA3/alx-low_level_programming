#include"main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
		return (0);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (0);
	memset(ptr, 0, nmemb * size);
	return (ptr);
}
