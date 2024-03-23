#include "lists.h"

size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *curr;
	size_t node_count = 0;

	if (h == NULL)
		return (0);

	for (curr = (dlistint_t *)h; curr != NULL; curr = curr->next, node_count++)
		printf("%d\n", curr->n);

	return node_count;
}
