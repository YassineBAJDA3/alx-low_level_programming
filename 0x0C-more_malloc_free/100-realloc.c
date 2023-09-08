#include"main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - Reallocates a memory block.
 * @ptr: Pointer to the previously allocated memory block (or NULL).
 * @old_size: Size (in bytes) of the old allocated space.
 * @new_size: New size (in bytes) of the memory block.
 *
 * Return: A pointer to the reallocated memory block.
 *         If new_size > old_size, the added memory is not initialized.
 *         If new_size == old_size, return ptr.
 *         If ptr is NULL, equivalent to malloc(new_size).
 *         If new_size is zero and ptr is not NULL, equivalent to free(ptr).
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	void *new_ptr;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
			return (0);
		return (new_ptr);
	}
	if (new_size == 0)
	{
		free(ptr);
		return (0);
	}
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (0);
	if (new_size > old_size)
		new_size = old_size;
	for (i = 0; i < new_size; i++)
	{
		((char *)new_ptr)[i] = ((char *)ptr)[i];
	}
	free(ptr);
	return (new_ptr);
}
