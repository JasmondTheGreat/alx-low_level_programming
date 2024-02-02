#include "lists.h"

/**
 * free_list - frees a list_t list
 *
 * @head: head pointer
 */

void free_list(list_t *head)
{
	list_t *curr;

	if (!head)
		return;

	curr = head;

	while (curr)
	{
		free(curr->str);
		free(curr);
		curr = curr->next;
	}
}
