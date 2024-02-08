#include "lists.h"

/**
 * listint_len - returns the number of nodes in a linked list
 *
 * @h: head pointer
 *
 * Return: num of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	const listint_t *curr;

	if (h == NULL)
		return (0);

	for (curr = h; curr != NULL; curr = curr->next)
	{
		count++;
	}

	return (count);
}
