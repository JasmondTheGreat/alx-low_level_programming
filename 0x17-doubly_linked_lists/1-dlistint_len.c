#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a doubly linked list
 *
 * @h: head node pointer
 *
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
	dlistint_t *curr;

	if (h == NULL)
		return (0);

	for (curr = (dlistint_t *)h; curr != NULL; curr = curr->next, count++)
		;

	return (count);
}
