#include "lists.h"

/**
 * get_dnodeint_at_index - gets the nth node of a dlistint_t list
 *
 * @head: head node pointer
 * @index: index param
 *
 * Return: node at index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *curr;
	unsigned int count;

	for (curr = head, count = 0; curr != NULL; curr = curr->next, count++)
	{
		if (count == index)
			break;
	}

	if (count != index)
		return (NULL);

	return (curr);
}
