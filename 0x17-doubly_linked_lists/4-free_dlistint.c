#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 *
 * @head: head pointer
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *curr;

	if (head != NULL)
	{
		for (curr = head; curr != NULL; curr = curr->next)
			free(curr);
	}
}
