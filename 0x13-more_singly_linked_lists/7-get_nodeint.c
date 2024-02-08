#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 *
 * @head: head pointer
 * @index: index of node to return
 *
 * Return:  nth node of a listint_t linked list, otherwise NULL if the node doesn't exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t count = 0;
	listint_t *curr;

	for (curr = head; !curr; curr = curr->next, count++)
	{
		if (count == index)
			return (curr);
	}

	return (NULL);

}
