#include "lists.h"

/**
 * find_listint_loop - Finds the loop in a linked list.
 * @head: The linked list to search for a loop.
 *
 * Return: The address of the node where the loop starts, or NULL.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow = head;
	listint_t *fast = head;

	if (!head)
		return (NULL);

	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			listint_t *loop_node = head;

			while (loop_node != slow)
			{
				loop_node = loop_node->next;
				slow = slow->next;
			}

			return (loop_node);
		}
	}

	return (NULL);
}
