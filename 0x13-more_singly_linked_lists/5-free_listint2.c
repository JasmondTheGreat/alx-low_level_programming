#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 *
 * @head: head double pointer
 */

void free_listint2(listint_t **head)
{
	listint_t *curr;

	if (*head == NULL)
		free(*head);

	for (curr = *head; !curr; curr = curr->next)
		free(curr);

	*head = NULL;
}
