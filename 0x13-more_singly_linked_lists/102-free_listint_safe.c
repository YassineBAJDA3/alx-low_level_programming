#include "lists.h"

/**
 * free_listint_safe - Frees a linked list of integers safely.
 * @h: A pointer to the pointer to the head of the list.
 *
 * Return: The number of elements in the freed list.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	listint_t *temp, *current;

	if (h == NULL || *h == NULL)
		return (0);

	current = *h;
	while (current != NULL)
	{
		temp = current->next;

		/* Check if the address difference is positive */
		if (current < temp)
		{
			free(current);
			len++;
		}
		else
		{
			free(current);
			break; /* Exit loop when loop detected */
		}

		current = temp;
	}

	*h = NULL; /* Set the head to NULL after freeing all nodes */
	return (len);
}
