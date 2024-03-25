#include "lists.h"

/**
 * free_listint - frees a listint_t list
 *
 * @head: head pointer
 */

void free_listint(listint_t *head)
{
	listint_t *curr;

	for (curr = head; curr != NULL; curr = curr->next)
		free(curr);
}
