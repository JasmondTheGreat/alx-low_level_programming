#include "lists.h"

/**
 * free_listint - frees a listint_t list
 *
 * @head: head pointer
 */

void free_listint(listint_t *head)
{
	listint_t *curr, *temp;

	if (head == NULL)
		free(head);

	for (curr = head; !curr; curr = curr->next)
	{
		temp = curr;
		free(temp);
	}
}
