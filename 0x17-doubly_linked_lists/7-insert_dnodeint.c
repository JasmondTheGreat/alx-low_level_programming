#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at given position
 *
 * @h: head node double pointer
 * @idx: index to insert node to
 * @n: number param (data for new node)
 *
 * Return: address of new node or NULL on failure
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *curr;
	unsigned int count;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = new_node->prev = NULL;
	if (*h == NULL)
	{
		*h = new_node;
		return (new_node);
	}

	for (curr = *h, count = 0; curr != NULL; curr = curr->next, count++)
	{
		printf("count: %d\tidx: %d\n", count, idx);
		if (count == idx)
			break;
	}

	new_node->next = curr;
	new_node->prev = curr->prev;
	(curr->prev)->next = new_node;
	curr->prev = new_node;

	if (count != idx)
		return (NULL);

	return (new_node);
}
